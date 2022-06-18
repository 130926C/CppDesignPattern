#ifndef _MANAGER_HPP_
#define _MANAGER_HPP_

#include <list>
#include "Person.hpp"

class Manager{
public:
    void attach(Person* p){
        this->pList.push_back(p);
    }

    void detach(Person* p){
        pList.remove(p);
    }

    void display(Action* action){
        for(auto value: pList){
            value->accept(action);
        }
    }

private:
    std::list<Person*> pList;
};

#endif 