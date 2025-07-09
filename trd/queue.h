#include <mutex>
#include <iostream>
#include <string>
#include <queue>

#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
    std::queue<std::string> m_queue;
    std::mutex mtx;

public:
    void push(int number);

    std::string pop();

    Queue() {}
};

#endif // QUEUE_H
