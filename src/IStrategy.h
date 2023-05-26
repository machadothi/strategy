#ifndef SRC_ISTRATEGY_H_
#define SRC_ISTRATEGY_H_

#include <string>

class IStrategy
{
public:
    virtual ~IStrategy() = default;
    virtual std::string doAlgorithm(std::string_view data) const = 0;

    typedef std::shared_ptr<IStrategy> ptr_t;
};

typedef IStrategy::ptr_t IStrategy_ptr;

#endif // SRC_ISTRATEGY_H_