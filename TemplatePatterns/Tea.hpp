#ifndef _TEA_HPP_
#define _TEA_HPP_

#include "CaffeineBeverage.hpp"

class Tea: public CaffeienBervage{

public:
    ~Tea() {}

    void brew(){
        cout << "Steeping the tea" << endl;
    }
    void addCondiments(){
        cout << "Adding Lemon" << endl;
    }

    bool customerWantCondiments(){
        return true;
    }

};

#endif