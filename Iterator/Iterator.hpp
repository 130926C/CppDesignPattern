#ifndef _ITERATOR_HPP_
#define _ITERATOR_HPP_

#include <iostream>

class Iterator{
public:
    Iterator() {};
    virtual ~Iterator() = default;
    
    virtual std::string First() = 0;
    virtual std::string Next() = 0;
    virtual std::string CurrentItem() = 0;
    virtual bool IsDone() = 0;
    
};

#endif 