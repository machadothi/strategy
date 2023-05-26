#ifndef SRC_CONTEXT_H_
#define SRC_CONTEXT_H_

#include <string>
#include <list>

#include "TestStrategy.h"

class Context
{
private:
    std::unique_ptr<IStrategy> strategy_;

public:
    explicit Context(std::unique_ptr<IStrategy> &&strategy = {});

    void set_strategy(std::unique_ptr<IStrategy> &&strategy);

    void doSomeBusinessLogic() const;
};


#endif // SRC_CONTEXT_H_