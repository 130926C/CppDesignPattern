#include "ChinaFactory.hpp"
#include "USAFactory.hpp"

#include <memory>

void test(){
    std::unique_ptr<AbstractFactory> fac;
    fac = std::make_unique<ChinaFactory>();
    auto apple = fac->createApple();
    auto banana = fac->createBanana();

    apple->showName();
    banana->showName();
}

int main(int argc, char* argv[]){
    test();

    return 0;
}