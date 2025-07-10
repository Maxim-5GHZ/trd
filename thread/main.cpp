#include <iostream>
#include"queue.h"
#include "client.h"
#include "server.h"

using namespace std;

int main()
{   
    Queue* data = new Queue;

   
    
    Client cl1(data);
    Server s1(data);
    s1.run();
    cl1.run();
    return 0;
}
