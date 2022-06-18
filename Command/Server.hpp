#ifndef _SERVER_HPP_
#define _SERVER_HPP_

#include <queue>
#include <unistd.h>
#include "AbstractCommand.hpp"

class Server{
public:
    void addRequest(AbstractCommand* command){
        this->mCommands.push(command);
    }

    void startHandle(){
        while(!this->mCommands.empty()){
            sleep(1);
            AbstractCommand* command = mCommands.front();
            command->handle();
            mCommands.pop();
        }
    }
    std::queue<AbstractCommand*> mCommands;
};



#endif 