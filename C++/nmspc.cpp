#include<iostream>

namespace BEI{
    char subject[20]="Electronics";
    int room=401;
    void printSubject(){
        std::cout<<subject<<std::endl;
    }
    void printRoom(){
        std::cout<<room<<std::endl;
    }
    void number(){
        std::cout<<"50"<<std::endl;
    }
}
namespace BCT{
    char subject[30]="Software Engineering";
    int labRoom=401;
    void printSubject(){
        std::cout<<subject<<std::endl;
    }
    void printLabRoom(){
        std::cout<<labRoom<<std::endl;
    }
    void number(){
        std::cout<<"40"<<std::endl;
    }
}

int main(){
    using namespace BEI;
    using namespace BCT;
    printLabRoom();
    printRoom();
    BEI::number();
    BCT::number();
    BEI::printSubject();
    BCT::printSubject();

    std::cout<<std::endl<<"--------------"<<std::endl;
    BEI::number();
    printLabRoom();
    BEI::printSubject();
    std::cout<<std::endl;
    std::cout<<"--------------"<<std::endl;
    BCT::number();
    printRoom();
    BCT::printSubject();
    return 0;
}
