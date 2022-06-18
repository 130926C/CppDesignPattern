#ifndef _ABSTRACTION_HPP_
#define _ABSTRACTION_HPP_

class Abstraction{

public:
    virtual ~Abstraction() = default;

    virtual void Operation() = 0;

protected:
    Abstraction() {};
};

#endif 