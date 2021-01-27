//
// Created by apel on 17.01.2021.
//

#pragma once

#include <sstream>

class Date {
public:
    Date();

    Date(int, int, int);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

private:
    int _year, _month, _day;
};

Date ParseDate(std::istream& is);

bool operator<(const Date& lhs, const Date& rhs);
bool operator==(const Date& lhs, const Date& rhs);
bool operator!=(const Date& lhs, const Date& rhs);
bool operator<=(const Date& lhs, const Date& rhs);
bool operator>(const Date& lhs, const Date& rhs);
bool operator>=(const Date& lhs, const Date& rhs);

std::ostream& operator<<(std::ostream& stream, const Date& date);
