//
// Created by apel on 17.01.2021.
//

#include "date.h"

#include <tuple>
#include <iomanip>

Date::Date()
    : _year(0), _month(0), _day(0) {}

Date::Date(int new_year, int new_month, int new_day)
    : _year(new_year), _month(new_month), _day(new_day) {
}

int Date::getYear() const {
    return _year;
}

int Date::getMonth() const {
    return _month;
}

int Date::getDay() const {
    return _day;
}

Date ParseDate(std::istream& is) {
    int year, month, day;
    is >> year;
    is.ignore();
    is >> month;
    is.ignore();
    is >> day;
    return Date{ year, month, day };
}

bool operator<(const Date& lhs, const Date& rhs) {
    return std::make_tuple(lhs.getYear(), lhs.getMonth(), lhs.getDay()) <
        std::make_tuple(rhs.getYear(), rhs.getMonth(), rhs.getDay());
}

bool operator==(const Date& lhs, const Date& rhs) {
    return !(lhs < rhs) && !(rhs < lhs);
}

bool operator!=(const Date& lhs, const Date& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const Date& lhs, const Date& rhs) {
    return !(rhs < lhs);
}

bool operator>(const Date& lhs, const Date& rhs) {
    return rhs < lhs;
}

bool operator>=(const Date& lhs, const Date& rhs) {
    return !(lhs < rhs);
}

std::ostream& operator<<(std::ostream& stream, const Date& date) {
    return stream << std::setw(4) << std::setfill('0') << date.getYear() <<
        "-" << std::setw(2) << std::setfill('0') << date.getMonth() <<
        "-" << std::setw(2) << std::setfill('0') << date.getDay();
}