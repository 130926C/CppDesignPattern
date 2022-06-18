#include "ConcreteExpression.hpp"
#include "Context.hpp"

#include <iostream>

void test(){
    Context* pcxt = new Context(10);
    Expression* exp = new PlusExpression();

    exp->interpreter(pcxt);
    std::cout << "Plus Expression " << pcxt->getRes() << std::endl;

}

int main(){
    test();

    return 0;
}