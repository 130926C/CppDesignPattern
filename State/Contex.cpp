#include "Contex.hpp"

#include <string>
#include "ConcreteState.hpp"

ForumAccount::ForumAccount(std::string name)
    : name_(name), state_(std::make_shared<PrimaryState>(this)){
    printf("帐号%s注册成功\n", name.c_str());
};

void ForumAccount::downloadFile(int score){
    state_->downloadFile(score);
}

void ForumAccount::writeNote(int score){
    state_->writeNote(score);
}

void ForumAccount::replyNote(int score){
    state_->replyNote(score);
}