#include "queue.h"
#include <mutex>

#ifndef BASE_H
#define BASE_H

class Base
{
    int co{};

protected:

    void read();
    Queue *m_queue;

    void print();
    static std::mutex cout_mtx;

public:

    void get(Queue *q);
    virtual void run() = 0;
    
    Base();

};

#endif // BASE_H
