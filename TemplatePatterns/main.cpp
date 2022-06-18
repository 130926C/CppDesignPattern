#include "Tea.hpp"
#include "Coffee.hpp"

int main(){
    Tea* tea = new Tea();
    Coffee* coffee = new Coffee();

    tea->prepareRecipe();
    coffee->prepareRecipe();

    return 0;
}