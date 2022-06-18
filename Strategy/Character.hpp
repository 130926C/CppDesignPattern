#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include "AbstractionWeapon.hpp"
#include <memory>

class Character{

public:
    void setWeapon(std::unique_ptr<AbstractionWeapon>&w){
        weapon_ = std::move(w);
    }

    void ThrowWeapon(){
        weapon_->UseWeapon();
    }

private:
    std::unique_ptr<AbstractionWeapon> weapon_;
};

#endif 