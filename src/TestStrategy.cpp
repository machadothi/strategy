#include <iostream>
#include <memory>

#include "TestStrategy.h"


std::string ConcreteStrategyA::doAlgorithm(std::string_view data) const
{
    std::string result(data);
    std::sort(std::begin(result), std::end(result));

    return result;
}

// -----------------------------------------------------------------------------

std::string ConcreteStrategyB::doAlgorithm(std::string_view data) const
{
    std::string result(data);
    std::sort(std::begin(result), std::end(result), std::greater<>());

    return result;
}