#include "queue.h"


Queue::Queue() {}


void Queue::push(int number) {

        std::lock_guard<std::mutex> lock(mtx);
        m_queue.push(std::to_string(number));
    
    }


std::string Queue::pop(){
        std::lock_guard<std::mutex> lock(mtx);

        if (m_queue.empty()) return "!";
        std::string number = m_queue.front();
        m_queue.pop();

        return number;
    }