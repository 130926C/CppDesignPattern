#ifndef _DRINKTEMPLETE_HPP_
#define _DRINKTEMPLETE_HPP_

class DrinkTemplete{

private:
    virtual void BoildWater() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void AddSomething() = 0;

public:
    void Make(){
        BoildWater();
        Brew();
        PourInCup();
        AddSomething();
    }
};


#endif 