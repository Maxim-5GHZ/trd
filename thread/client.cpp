#include"client.h"

Client::Client(Queue *l_data,int id){

    m_data = l_data;
    this->id = id;

}


void Client::run(){
    auto read =[this](){

        while(1){
            
        std::string num = m_data->getAndPop();

        if(num!="!")std::cout<<"client"<<id<<" read "<<num<<"\n";

        }
    };

    std::thread l_thrd(read);

    m_thrd = std::move(l_thrd);

}



Client::~Client(){

    m_thrd.join();

}