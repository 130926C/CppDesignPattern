#ifndef _CONCRETECOLLEAGUETWO_HPP_
#define _CONCRETECOLLEAGUETWO_HPP_

#include <iostream>
#include <string>
#include "Colleague.hpp"
#include "Mediator.hpp"

class ConcreteColleagueTwo: public Colleague{

public:
    ConcreteColleagueTwo(Mediator* mediator): Colleague(mediator){

    };

    void send(std::string message){
        getMediator()->send(message, this);
    }

    void Notify(std::string message){
        std::cout << "Colleague Two recivied message:" << message << std::endl;
    }
};

#endif