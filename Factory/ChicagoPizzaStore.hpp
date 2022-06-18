#ifndef _CHICAGOPIZZASTROE_HPP_
#define _CHICAGOPIZZASTROE_HPP_

#include "PizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStylePepperonPizza.hpp"

class ChicagoPizzaStore: public PizzaStore{

public:
    std::unique_ptr<Pizza> createPizza(std::string type){
        std::unique_ptr<Pizza> pizza = nullptr;
        if (type == "cheese"){
            pizza = std::make_unique<ChicagoStyleCheesePizza>();
        }else if (type == "pepperoni"){
            pizza = std::make_unique<ChicagoStylePepperonPizza>();
        }
        return pizza;
    }
};

#endif