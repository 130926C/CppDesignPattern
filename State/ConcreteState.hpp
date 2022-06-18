#ifndef _CONCRETESTATE_HPP_
#define _CONCRETESTATE_HPP_

#include <cstdio>
#include "State.hpp"

class PrimaryState: public AbstractState{

public:
    explicit PrimaryState(AbstractState* state){
        account_ = state->get_account();
        point_ = state->get_point();
        state_name_ = "新手";
    }

    explicit PrimaryState(ForumAccount* account){
        account_ = account;
        point_ = 0;
        state_name_ = "新手";
    }

    void downloadFile(int score) override{
        printf("%s没有下载权限", account_->get_name().c_str());
    }

    void checkState() override {
        if (point_ >= 1000){
            account_->set_state(std::make_shared<HighState>(this));
        }else if (point_ >=100){
            account_->set_state(std::make_shared<PrimaryState>(this));
        }
    }

private:
};

class MiddleState: public AbstractState{

public:
    explicit MiddleState(AbstractState* state){
        account_ = state->get_account();
        point_ = state->get_point();
        state_name_ = "高手";
    }

    void writeNote(int score) override{
        printf("%s发布留言，增加%d积分\n", account_->get_name().c_str(), score);
        point_ += score * 2;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

    void checkState() override{
        if (point_ >= 1000){
            account_->set_state(std::make_shared<HighState>(this));
        }else if (point_ < 100){
            account_->set_state(std::make_shared<PrimaryState>(this));
        }
    }
};

class HighState:public AbstractState{

public:
    explicit HighState(AbstractState* state){
        account_ = state->get_account();
        point_ = state->get_point();
        state_name_  = "专家";
    }

    void writeNote(int score) override{
        printf("%s发布留言，增加%d积分\n", account_->get_name().c_str(), score);
        point_ += score *2;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

    virtual void downloadFile(int score){
        printf("%s下载文件，消耗%d积分\n", account_->get_name().c_str(), score);
        point_ -= score;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

    void checkState() override{
        if (point_ < 100){
            account_->set_state(std::make_shared<PrimaryState>(this));
        }else if (point_ < 1000){
            account_->set_state(std::make_shared<MiddleState>(this));
        }
    }
};


#endif 