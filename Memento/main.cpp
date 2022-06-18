#include <iostream>
#include "Originator.hpp"
#include "Caretaker.hpp"

void test(){
    Originator originator;
    Caretaker caretaker;
    
    originator.setState("状态1，伤害=10");
    caretaker.add(originator.SaveStateMemento());

    originator.setState("状态2，伤害=30");
    caretaker.add(originator.SaveStateMemento());

    std::cout << "当前状态" << originator.getState() << std::endl;

    std::cout << "回滚状态" << caretaker.get(0).getState() << std::endl;

}



int main(){
    test();

    return 0;
}