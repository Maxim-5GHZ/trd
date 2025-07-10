#include<memory>
#include"queue.h"
#include "client.h"
#include "server.h"


int main()
{   
    std::shared_ptr<Queue> data = std::make_shared<Queue>();

    Client cl1(data);
    Client cl2(data,2);
    
    Server s1(data);
    Server s2(data,2);

    s1.run();
    s2.run();

    cl1.run();
    cl2.run();

    return 0;
}
