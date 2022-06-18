#ifndef _CONCRETECOLLEAGUEONE_HPP_
#define _CONCRETECOLLEAGUEONE_HPP_

#include <iostream>
#include <string>
#include "Colleague.hpp"
#include "Mediator.hpp"

class ConcreteColleagueOne: public Colleague{

public:
    ConcreteColleagueOne(Mediator* mediator): Colleague(mediator) {

    };

    void send(std::string message){
        getMediator()->send(message, this);
    }

    void Notify(std::string message){
        std::cout << "Colleague One recivied message:" << message << std::endl;
    }
};


#endif 