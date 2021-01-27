//
// Created by apel on 18.01.2021.
//

#pragma once

#include <chrono>
#include <string>

#define UNIQ_ID_IMPL(lineno) _a_local_var_##lineno
#define UNIQ_ID(lineno) UNIQ_ID_IMPL(lineno)

#define LOG_DURATION(message) \
  LogDuration UNIQ_ID(__LINE__){message};


class LogDuration {
public:
    explicit LogDuration(const std::string& msg = "");
    ~LogDuration();
private:
    std::string message;
    std::chrono::steady_clock::time_point start;
};
