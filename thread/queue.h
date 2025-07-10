#include<queue>
#include<string>
#include<mutex>
#include<iostream>

#pragma once

class Queue
{
    std::queue<std::string> m_data;
    std::mutex mtx;

public:

    std::string getAndPop();
    void push(int i);

};
