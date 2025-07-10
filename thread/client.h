#include<thread>
#include"queue.h"

#pragma once


class Client{
private:

    Queue *m_data;

    std::thread m_thrd; 

    size_t id;

public:

    Client(Queue *l_data,int id = 1);

    void run();
    
    ~Client();

};