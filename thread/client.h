#include<thread>
#include"queue.h"
#include<memory>

#pragma once


class Client{
private:

    std::shared_ptr<Queue>m_data;

    std::thread m_thrd; 

    size_t id;

public:

    Client(std::shared_ptr<Queue>m_data,int id = 1);

    void run();
    
    ~Client();

};