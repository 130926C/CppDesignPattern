#ifndef _AGGREGATE_HPP_
#define _AGGREGATE_HPP_

#include <string>
#include "Iterator.hpp"

class Aggregate{
public:
    virtual int Count() = 0;
    virtual void Push(const std::string& strValue) = 0;
    virtual std::string Pop(const int nIndex) = 0;
    virtual Iterator* CreateIterator() = 0;
};


#endif 