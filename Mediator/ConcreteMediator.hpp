#ifndef _CONCRETEMEDAITOR_HPP_
#define _CONCRETEMEDAITOR_HPP_

#include <vector>
#include <string>
#include <iostream>

#include "Colleague.hpp"
#include "Mediator.hpp"

class ConcreteMediator: public Mediator{

public:
    void add(Colleague* colleague){
        colleagueList.push_back(colleague);
    }

    void send(std::string message, Colleague* colleague){
        for(auto value: colleagueList){
            if (value != colleague){
                value->Notify(message);
            }
        }
    }

private:
    std::vector<Colleague*> colleagueList;
};


#endif 