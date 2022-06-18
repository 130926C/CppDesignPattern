#ifndef _OBSERVER_HPP_
#define _OBSERVER_HPP_

class Observer{

public: 
    virtual ~Observer() = default;
    virtual void update(float temp, float humid, float press) = 0;
};


#endif 