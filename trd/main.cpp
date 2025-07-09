#include <iostream>
#include <thread>
#include "server.h"
#include "client.h"
#include "queue.h"

int main() {
    std::cout << "Старт программы" << std::endl;

    Queue q;
    Server s1, s2;
    Client c1, c2;

    s1.get(&q);
    s2.get(&q);
    c1.get(&q);
    c2.get(&q);

    std::thread writer1(&Server::run, &s1);
    std::thread writer2(&Server::run, &s1);

    std::thread reader1(&Client::run, &c1);
    std::thread reader2(&Client::run, &c1);

    writer1.join();
    writer2.join();

    
    reader1.join();
    reader2.join();
    
    return 0;
}
