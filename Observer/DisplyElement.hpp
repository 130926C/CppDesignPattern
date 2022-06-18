#ifndef _DISPLAYELEMENT_HPP_
#define _DISPLAYELEMENT_HPP_

class DisplayElement{

public:
    virtual ~DisplayElement() = default;
    virtual void display() = 0;
};


#endif 