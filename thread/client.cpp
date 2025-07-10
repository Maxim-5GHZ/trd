#include"client.h"
#include <memory>

Client::Client(std::shared_ptr<Queue>l_data,int id){

    m_data = std::move(l_data);
    this->id = id;

}


void Client::run(){
    auto read =[this](){

        while(1){
            
        std::string num = m_data->getAndPop();

        if(num!="!")std::cout<<"client"<<id<<" read "<<num<<"\n";

        }
    };

    
    auto l_thrd = std::make_unique<std::thread>(read);
    m_thrd = std::move(l_thrd);

}



Client::~Client(){
    if(m_thrd){
        m_thrd->join();
    }
}