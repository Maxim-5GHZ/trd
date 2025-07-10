#include<thread>
#include"queue.h"
#include<memory>

#pragma once


class Server{
private:

    std::shared_ptr<Queue>m_data;

    std::unique_ptr<std::thread> m_thrd = nullptr;

    size_t id;
    

public:
    Server(std::shared_ptr<Queue> data,int id = 1);

    void run();
    
    ~Server();
};