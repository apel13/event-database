#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <sstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::ostringstream MainWindow::parse_query(std::string query)
{
    std::istringstream is(std::move(query));
    std::ostringstream os;

    string command;
    is >> command;
    if (command == "Add") {
       const auto date = ParseDate(is);
       const auto event = ParseEvent(is);
       db.Add(date, event);
    }
    else if (command == "Print") {
       db.Print(os);
    }
    else if (command == "Del") {
       auto condition = ParseCondition(is);
       auto predicate = [condition](const Date& date, const string& event) {
           return condition->Evaluate(date, event);
       };
       int count = db.RemoveIf(predicate);
       os << "Removed " << count << " entries" << endl;
    }
    else if (command == "Find") {
       auto condition = ParseCondition(is);
       auto predicate = [condition](const Date& date, const string& event) {
           return condition->Evaluate(date, event);
       };

       const auto entries = db.FindIf(predicate);
       for (const auto& entry : entries) {
           os << entry << endl;
       }
       os << "Found " << entries.size() << " entries" << endl;
    }
    else if (command == "Last") {
       try {
           os << db.Last(ParseDate(is)) << endl;
       }
       catch (invalid_argument&) {
           os << "No entries" << endl;
       }
    }
//    else if (command.empty()) {
//       continue;
//    }
    else {
       throw logic_error("Unknown command: " + command);
    }
    return os;

}

void MainWindow::on_btn_execute_clicked()
{
    std::string query = ui->le_query->text().toStdString();


    std::string result;
    try {
        result = this->parse_query(query).str();
    }  catch (...) {
        result = "error";
    }
    ui->text_result_2->setText(result.data());
}
