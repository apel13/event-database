//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../node.h"
#include "../../ExpParser/comparison.h"

class DateComparisonNode : public Node {
public:
    DateComparisonNode(const Comparison&, const Date&);

    bool Evaluate(const Date& date, const std::string& string) const override;

private:
    const Comparison _comparison;
    const Date _date;
};
