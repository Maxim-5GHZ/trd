#include "client.h"
#include <thread>
#include <chrono>

Client::Client() {}

void Client::run() {
    for (int i = 0; i < 10;) {
        read();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
