#include<thread>
#include"queue.h"
#include<chrono>

#pragma once


class Server{
private:
    Queue *m_data;
    std::thread m_thrd; 
    size_t id;
    

public:
    Server(Queue *l_data,int id = 1);
    void run();
    ~Server();
};