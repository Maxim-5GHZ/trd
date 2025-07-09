#include "server.h"
#include <thread>
#include <chrono>

Server::Server() {}

void Server::run() {
    for (int i = 0; i < 10; ) {
        print();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
