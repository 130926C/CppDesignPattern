#ifndef _PERSION_HPP_
#define _PERSION_HPP_

#include "Action.hpp"

class Person{
public:
    virtual void accept(Action* action) = 0;

    ~Person() = default;
};



#endif