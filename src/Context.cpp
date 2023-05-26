#include <iostream>
#include "Context.h"

Context::Context(std::unique_ptr<IStrategy> &&strategy) : strategy_(std::move(strategy))
{
}

// -----------------------------------------------------------------------------

void Context::set_strategy(std::unique_ptr<IStrategy> &&strategy)
{
    strategy_ = std::move(strategy);
}

// -----------------------------------------------------------------------------

void Context::doSomeBusinessLogic() const
{
    if (strategy_) {
        std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
        std::string result = strategy_->doAlgorithm("aecbd");
        std::cout << result << "\n";
    } else {
        std::cout << "Context: Strategy isn't set\n";
    }
}