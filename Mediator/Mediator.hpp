#ifndef _MEDIATOR_HPP_
#define _MEDIATOR_HPP_

#include "Colleague.hpp"
#include <string>

class Mediator{

public:
    virtual void send(std::string messgae, Colleague* colleague) = 0;
    virtual void add(Colleague* colleague) = 0;
};

#endif 