#ifndef _CONCRETEAGGREGATE_HPP_
#define _CONCRETEAGGREGATE_HPP_

#include "Aggregate.hpp"
#include "Iterator.hpp"
#include "ConcreteIterator.hpp"
#include <vector>
#include <string>

class ConcreteAggregate:public Aggregate{
public:
    ConcreteAggregate():m_pIterator(nullptr) { m_vecItems.clear(); };

    ~ConcreteAggregate(){
        if (nullptr != m_pIterator){
            delete m_pIterator;
            m_pIterator = nullptr;
        }
    }

    Iterator* CreateIterator(){
        if (nullptr == m_pIterator){
            m_pIterator = new ConcreteIterator(this);
        }
        return m_pIterator;
    }

    int Count(){
        return m_vecItems.size();
    }

    void Push(const std::string& strValue){
        m_vecItems.push_back(strValue);
    }

    std::string Pop(const int nIndex){
        std::string strRet;
        if(nIndex < Count()){
            strRet = m_vecItems[nIndex];
        }
        return strRet;
    }


private:
    std::vector<std::string> m_vecItems;
    Iterator* m_pIterator;
};


#endif 