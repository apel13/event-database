
#pragma once

#include <QMainWindow>

#include "../core/DataBase/database.h"
#include "../core/Date/date.h"
#include "../core/ExpParser/condition_parser.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_btn_execute_clicked();

private:
    Ui::MainWindow *ui;

    Database db;


    std::ostringstream parse_query(std::string query);
};
