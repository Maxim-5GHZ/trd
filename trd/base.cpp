#include "base.h"

std::mutex Base::cout_mtx;

void Base::get(Queue *q) {
    m_queue = q;
}

void Base::print() {
    m_queue->push(co);
    co++;
}

void Base::read() {
    std::string buf = m_queue->pop();
    if (buf != "!") {
        std::lock_guard<std::mutex> lock(cout_mtx);
        std::cout << "Прочитано: " << buf << std::endl;
    }
}

Base::Base() {}
