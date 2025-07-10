#include"server.h"


Server::Server( std::shared_ptr<Queue> data ,int id){

    m_data = std::move(data);
    this->id = id;
    
}


void Server::run(){
    auto push =[this](){

        for(size_t counter=0;counter<4294967294;counter++){
        
            m_data->push(counter);
            
            std::cout<<"server"<<id<<" push "<<counter<<"\n";
        
        }
    };

    std::thread l_thrd(push);
    m_thrd = std::move(l_thrd);

}



Server::~Server(){

    m_thrd.join();

}