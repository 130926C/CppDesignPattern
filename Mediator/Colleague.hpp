#ifndef _COLLEAGUE_HPP_
#define _COLLEAGUE_HPP_

#include <string>

class Mediator;

class Colleague{

public:
    Colleague(Mediator* mediator);
    
    Mediator * getMediator();
    void setMediator(Mediator* const mediator);
    
    virtual void Notify(std::string message)=0;
    virtual void send(std::string messgae)=0;

    ~Colleague() = default;

private:
    Mediator* mediator;
};

#endif 