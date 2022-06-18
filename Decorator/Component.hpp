#ifndef _COMPONENT_HPP_
#define _COMPONENT_HPP_

class Component{

public:
    Component() {};
    virtual ~Component() = default;

    virtual void Operation() = 0; 

};

#endif 