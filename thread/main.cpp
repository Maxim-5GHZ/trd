#include <iostream>
#include"queue.h"
#include "client.h"
#include "server.h"

using namespace std;

int main()
{   
    Queue* data = new Queue;

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
