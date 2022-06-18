#include "ConcreteCommand.hpp"
#include "Server.hpp"
#include "HandleClinetProtocal.hpp"

void test(){
    HandleClientProtocal* protocal = new HandleClientProtocal();
    AbstractCommand* addmoney = new AddMoneyCommand(protocal);
    AbstractCommand* adddiamond = new AddDiamondCommand(protocal);
    AbstractCommand* addlevel = new AddLevelCommand(protocal);

    Server* server = new Server();
    server->addRequest(addmoney);
    server->addRequest(adddiamond);
    server->addRequest(addlevel);

    server->addRequest(adddiamond);
    server->addRequest(addlevel);

    server->startHandle();
}

int main(){
    test();

    return 0;
}