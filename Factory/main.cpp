#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "Pizza.hpp"
#include "PizzaStore.hpp"

int main(){
    auto nyStore = new NYPizzaStore();
    auto chStore = new ChicagoPizzaStore();

    auto nyCheese = nyStore->orderPizza("cheese");
    auto chPepper = chStore->orderPizza("pepperoni");

    return 0;
}