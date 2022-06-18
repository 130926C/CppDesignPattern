#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

class Context{
public:
    Context(int num): m_num(num) {};

public:
    void setNum(int num){
        this->m_num = num;
    }

    int getNum(){
        return this->m_num;
    }

    void setRes(int res){
        this->m_res = res;
    }

    int getRes(){
        return this->m_res;
    }

private:
    int m_num;
    int m_res;
};


#endif 