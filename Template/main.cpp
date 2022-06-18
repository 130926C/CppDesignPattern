#include "Coffee.hpp"
#include "Tea.hpp"

#include <memory>

void test(){
    std::unique_ptr<DrinkTemplete> coffee = std::make_unique<Cofffee>();
    std::unique_ptr<Tea> tea = std::make_unique<Tea>();

    coffee->Make();
    tea->Make();
}

int main(){

    test();

    return 0;
}