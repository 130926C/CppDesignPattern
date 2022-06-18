#ifndef _STATE_HPP_
#define _STATE_HPP_

#include <string>
#include <cstdio>
#include "Contex.hpp"

class AbstractState{

public:
    virtual void checkState() = 0;

    void set_point(int point){
        point_ = point;
    }

    int get_point(){
        return point_;
    }

    void set_state_name(std::string name){
        state_name_ = name;
    }

    ForumAccount* get_account(){
        return account_;
    }

    virtual void downloadFile(int score){
        printf("%s下再文件，扣除%d积分\n", account_->get_name().c_str(), score);
        point_ -= score;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

    virtual void writeNote(int score){
        printf("%s发布留言，增加%d积分\n", account_->get_name().c_str(), score);
        point_ += score;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

    virtual void replyNote(int score){
        printf("%s回复留言，增加%d积分\n", account_->get_name().c_str(), score);
        point_ += score;
        checkState();
        printf("%s剩余%d积分\n", account_->get_name().c_str(), point_);
    }

protected:
    ForumAccount* account_;
    int point_;
    std::string state_name_;
};


#endif 