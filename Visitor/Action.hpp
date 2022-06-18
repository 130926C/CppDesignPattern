#ifndef _ACTION_HPP_
#define _ACTION_HPP_

class Man;
class Woman;

class Action{
public:
    virtual void getManResult(Man* man) = 0;
    virtual void getWomanResult(Woman* woman) = 0;

    ~Action() = default;
};


#endif 