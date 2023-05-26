#ifndef SRC_TEST_STRATEGY_H_
#define SRC_TEST_STRATEGY_H_

#include "IStrategy.h"

class ConcreteStrategyA : public IStrategy
{
public:
    std::string doAlgorithm(std::string_view data) const override;
};

// -----------------------------------------------------------------------------

class ConcreteStrategyB : public IStrategy
{
    std::string doAlgorithm(std::string_view data) const override;
};

#endif // SRC_TEST_STRATEGY_H_