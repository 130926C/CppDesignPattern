#include "ConcreteComponent.hpp"
#include "ConcreteDecorator.hpp"

#include <memory>


int main(){

    std::shared_ptr<Component> comp = std::make_shared<ConcreteComponent>();
    std::shared_ptr<Component> deco = std::make_shared<ConcreteDecorator>(comp);

    deco->Operation();

    return 0;
}