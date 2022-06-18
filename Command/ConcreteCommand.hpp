#ifndef _CONCRETECOMMAND_HPP_
#define _CONCRETECOMMAND_HPP_

#include "AbstractCommand.hpp"
#include "HandleClinetProtocal.hpp"

class AddMoneyCommand: public AbstractCommand{
public:
    AddMoneyCommand(HandleClientProtocal* protocal): pProtocal(protocal){};

    void handle() override{
        this->pProtocal->AddMoney();
    }

private:
    HandleClientProtocal* pProtocal;
};


class AddDiamondCommand: public AbstractCommand{
public:
    AddDiamondCommand(HandleClientProtocal* protocal): pProtocal(protocal) {};

    void handle() override{
        this->pProtocal->AddDiamond();
    }

private:
    HandleClientProtocal* pProtocal;
};


class AddLevelCommand: public AbstractCommand{
public: 
    AddLevelCommand(HandleClientProtocal* protoal): pProtocal(protoal) {};

    void handle() override{
        this->pProtocal->AddLevel();
    }

private:
    HandleClientProtocal* pProtocal;
};

#endif 