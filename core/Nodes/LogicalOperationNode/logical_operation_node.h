//
// Created by apel on 17.01.2021.
//

#pragma once

#include "../node.h"
#include "../../ExpParser/logical_operation.h"

#include <memory>

class LogicalOperationNode : public Node {
public:
    LogicalOperationNode(const LogicalOperation&,
        std::shared_ptr<Node> left,
        std::shared_ptr<Node> right);

    bool Evaluate(const Date& date, const std::string& string) const override;

private:
    const LogicalOperation _op;
    std::shared_ptr<Node> _left;
    std::shared_ptr<Node> _right;
};
