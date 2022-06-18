#ifndef _ABSTRACTCOMMAND_HPP_
#define _ABSTRACTCOMMAND_HPP_

class AbstractCommand{

public:
    virtual void handle() = 0;

    ~AbstractCommand() = default;
};


#endif 