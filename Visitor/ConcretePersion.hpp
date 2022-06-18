#ifndef _CONCRETEPERSION_HPP_
#define _CONCRETEPERSION_HPP_

#include "Person.hpp"

class Man: public Person{
public:
    void accept(Action* action) override{
        action->getManResult(this);
    };  
};


class Woman: public Person{
public:
    void accept(Action* action) override{
        action->getWomanResult(this);
    }
};


#endif 