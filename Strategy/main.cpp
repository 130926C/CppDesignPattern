#include "Character.hpp"
#include "AbstractionWeapon.hpp"
#include "Knife.hpp"
#include "AK47.hpp"

#include <memory>
#include <iostream>

void test(){
    std::unique_ptr<Character> hero = std::make_unique<Character>();

    std::unique_ptr<AbstractionWeapon> knife = std::make_unique<Knife>();
    std::unique_ptr<AbstractionWeapon> ak47 = std::make_unique<AK47>();

    hero->setWeapon(knife);
    hero->ThrowWeapon();

    hero->setWeapon(ak47);
    hero->ThrowWeapon();
}

int main(){

    test();

    return 0;
}