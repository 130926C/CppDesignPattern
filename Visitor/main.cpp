#include "ConcreteAction.hpp"
#include "ConcretePersion.hpp"
#include "Manager.hpp"

void test(){
    Manager* manager = new Manager();
    manager->attach(new Man());
    manager->attach(new Woman());

    Success* success = new Success();
    Fail* fail = new Fail();

    manager->display(success);
    manager->display(fail);
}


int main(){
    test();
    return 0;
}