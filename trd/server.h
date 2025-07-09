#include "base.h"

#ifndef SERVER_H
#define SERVER_H

class Server : public Base
{
public:
    Server();
    void run() override;
};

#endif // SERVER_H
