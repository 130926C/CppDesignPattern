#ifndef _CHICAGOSTYLECHEESEPIZZA_HPP_
#define _CHICAGOSTYLECHEESEPIZZA_HPP_

#include "Pizza.hpp"

class ChicagoStyleCheesePizza: public Pizza{

public: 
    ChicagoStyleCheesePizza(){
        name = "Chicago style Deep Dish Pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sacuce";
        toppings.push_back("Shreded mozzarella");
    }

};


#endif 