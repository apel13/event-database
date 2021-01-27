//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../node.h"
#include "../../ExpParser/comparison.h"


class EventComparisonNode : public Node {
public:
    EventComparisonNode(const Comparison&, const std::string&);

    bool Evaluate(const Date&, const std::string&) const override;

private:
    const Comparison _comparison;
    const std::string _value;
};
