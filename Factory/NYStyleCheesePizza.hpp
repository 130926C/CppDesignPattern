#ifndef _NYSTYLECHEESEPIZZA_HPP_
#define _NYSTYLECHEESEPIZZA_HPP_

#include "Pizza.hpp"

class NYStyleCheesePizza: public Pizza{

public:
    NYStyleCheesePizza(){
        name = "NY Style sacuce and cheese pizza";
        dough = "Thin crust dough";
        sauce = "Marinara sacue";
        toppings.push_back("Gratted reggiano cheese");
    }
};

#endif