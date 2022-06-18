#ifndef _TEA_HPP_
#define _TEA_HPP_

#include "DrinkTemplete.hpp"
#include <iostream>

class Tea: public DrinkTemplete{

    void BoildWater() override{
        std::cout << "Tea BoildWater" << std::endl;
    };
    
    void Brew() override{
        std::cout << "Tea Brew" << std::endl;
    };

    void PourInCup() override{  
        std::cout << "Tea Pour In Cup" << std::endl;
    };

    void AddSomething() override{
        std::cout << "Tea Add Something" << std::endl;
    };

};


#endif 