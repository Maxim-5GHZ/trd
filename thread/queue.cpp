#include "queue.h"

std::string Queue::getAndPop(){

    std::lock_guard<std::mutex> lock(mtx);

    if(!m_data.empty()){

        std::string numer = m_data.front();
        m_data.pop();

        return numer;

    }else return "!";
}

void Queue::push(int i){
    
    std::lock_guard<std::mutex> lock(mtx);

    m_data.push(std::to_string(i));

}
