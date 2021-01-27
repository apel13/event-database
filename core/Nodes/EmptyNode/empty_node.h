//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../node.h"

class EmptyNode : public Node {
public:
    bool Evaluate(const Date& date, const std::string& string) const override;
};
