//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../Date/date.h"

#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <vector>


class Database {
public:
    using predType = std::function<bool(const Date&, const std::string&)>;
    using retType = std::pair<Date, std::string>;

    void Add(const Date&, const std::string&);
    int RemoveIf(const predType&);
    std::vector<retType> FindIf(const predType&) const;
    retType Last(const Date&) const;
    void Print(std::ostream&) const;

private:
    std::map<Date, std::vector<std::string>> _date_to_events;
    std::map<std::string, std::set<Date>> _event_to_dates;
};

std::ostream& operator<<(std::ostream&, const Database::retType&);
std::string ParseEvent(std::istringstream& is);
