#ifndef _CHICAGOSYLEPEPPERONPIZZA_HPP_
#define _CHICAGOSYLEPEPPERONPIZZA_HPP_

#include "Pizza.hpp"

class ChicagoStylePepperonPizza: public Pizza{

public:
    ChicagoStylePepperonPizza(){
        name = "Chicago style pepperon Pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sauce";
        toppings.push_back("Shredded mozzarella");
        toppings.push_back("Sliced pepperon");
        toppings.push_back("No olives or eggplant because that should not go on a pizza");
    }
};

#endif