//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../Date/date.h"

struct Node {
    virtual bool Evaluate(const Date&, const std::string&) const = 0;
};
