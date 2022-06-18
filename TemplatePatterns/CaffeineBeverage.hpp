#ifndef _CAFFEIENBEVERAGE_HPP_
#define _CAFFEIENBEVERAGE_HPP_

#include <iostream>

using namespace std;

class CaffeienBervage{

public:
    virtual ~CaffeienBervage() {}

    void prepareRecipe(){
        brew();
        addCondiments();
        boilWater();
        pourInCup();
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater(){
        cout << "Boiling water" << endl;

    }
    void pourInCup(){
        cout << "pour in cip" << endl;
    }

    virtual bool customerWantCondiments(){
        return true;
    }

};



#endif 