//
// Created by apel on 17.01.2021.
//

#pragma once

#include "token.h"
#include "comparison.h"
#include "logical_operation.h"

#include "../Date/date.h"
#include "../Nodes/node.h"

#include <memory>
#include <iostream>

std::shared_ptr<Node> ParseCondition(std::istream& is);

void TestParseCondition();
