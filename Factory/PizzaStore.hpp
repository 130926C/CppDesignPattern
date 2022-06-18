#ifndef _PIZZASTORE_HPP_
#define _PIZZASTORE_HPP_

#include "Pizza.hpp"

#include <memory>

class PizzaStore{

public:
    std::unique_ptr<Pizza> orderPizza(std::string type){
        auto pizza = createPizza(type);
        if (pizza != nullptr){
            std::cout << "\n--- Making a " + pizza->getName() + "---\n\n";
            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();
        }
        return pizza;
    }

private:
    virtual std::unique_ptr<Pizza> createPizza(std::string tpye) = 0;
};


#endif 