#ifndef _ABSTRACTIONWEAPON_HPP_
#define _ABSTRACTIONWEAPON_HPP_

class AbstractionWeapon{

public:
    ~AbstractionWeapon() = default;

    virtual void UseWeapon() = 0;
};


#endif 