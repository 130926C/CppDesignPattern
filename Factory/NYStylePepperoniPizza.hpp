#ifndef _NYSTYLEPEPPERONIPIZZA_HPP_
#define _NYSTYLEPEPPERONIPIZZA_HPP_

#include "Pizza.hpp"

class NYStyplePepperoniPizza: public Pizza{

public:
    NYStyplePepperoniPizza(){
        name = "NY Style pepperoni pizza";
        dough = "Thin crust dough";
        sauce = "Marinara sauce";
        toppings.push_back("Grated reggiano cheese");
        toppings.push_back("Slicedc pepperoni");
        toppings.push_back("Garlic");
        toppings.push_back("Onion");
        toppings.push_back("Mushrooms");
    }   
};

#endif