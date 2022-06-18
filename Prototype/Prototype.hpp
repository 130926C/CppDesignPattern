#ifndef _PROTOTYPE_HPP_
#define _PROTOTYPE_HPP_

class Prototype{

public:
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;

protected:
    Prototype();
};

#endif 