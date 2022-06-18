#ifndef _CONCRETEITERATOR_HPP_
#define _CONCRETEITERATOR_HPP_

#include "Iterator.hpp"
#include "Aggregate.hpp"

#include <iostream>

class ConcreteIterator: public Iterator{
public:
    ConcreteIterator(Aggregate* pAggregate): Iterator(), m_Aggregate(pAggregate), m_nCurrent(0) {};

    std::string First(){
        return m_Aggregate->Pop(0);
    }
    
    std::string Next(){
        std::string strRet;
        m_nCurrent++;
        if (m_nCurrent < m_Aggregate->Count()) {
            strRet = m_Aggregate->Pop(m_nCurrent);
        }
        return strRet;
    }

    std::string CurrentItem(){
        return m_Aggregate->Pop(m_nCurrent);
    }

    bool IsDone(){
        return ((m_nCurrent >= m_Aggregate->Count()) ? true : false);
    }


private:
    Aggregate* m_Aggregate;
    int m_nCurrent;
};



#endif 