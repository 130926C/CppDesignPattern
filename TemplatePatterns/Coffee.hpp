#ifndef _COFFEE_HPP_
#define _COFFEE_HPP_

#include "CaffeineBeverage.hpp"

class Coffee: public CaffeienBervage{

public:
    ~Coffee() {}

    void brew(){
        cout << "Dripping Coffee through filter" << endl;
    }

    void addCondiments(){
        cout << "Adding Sugar and Milk" << endl;
    }

    bool customerWantCondiments(){
        return true;
    }


};


#endif 