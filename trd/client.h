#include "base.h"

#ifndef CLIENT_H
#define CLIENT_H

class Client : public Base
{
public:
    Client();
    void run() override;
};

#endif // CLIENT_H
