#ifndef _COFFEE_HPP_
#define _COFFEE_HPP_

#include "DrinkTemplete.hpp"
#include <iostream>

class Cofffee: public DrinkTemplete{

    void BoildWater() override{
        std::cout << "Coffee BoildWater" << std::endl;
    };
    
    void Brew() override{
        std::cout << "Coffee Brew" << std::endl;
    };

    void PourInCup() override{  
        std::cout << "Coffee Pour In Cup" << std::endl;
    };

    void AddSomething() override{
        std::cout << "Coffee Add Something" << std::endl;
    };
};

#endif 