#ifndef _CONCRETEACTION_HPP_
#define _CONCRETEACTION_HPP_

#include "Action.hpp"
#include <iostream>

class Success: public Action{
public:
    void getManResult(Man* man)override{
        std::cout << "man is success" << std::endl;
    };

    void getWomanResult(Woman* woman) override{
        std::cout << "womane is success" << std::endl;
    }
};


class Fail:public Action{
public:
    void getManResult(Man* man) override{
        std::cout << "man is fail" << std::endl;
    };

    void getWomanResult(Woman* woman) override{
        std::cout << "woman is fail" << std::endl;
    };  

};

#endif 