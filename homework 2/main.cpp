#include"readability.h"
#include<iostream>
#include<string>
int main(){
    std::cout<<"Text: ";
    std::string text;
    std::getline(std::cin,text);
    if(readability(text)<1){
        std::cout<<"Grade: Before Grade 1"<<std::endl;  
    }
    else if(readability(text)>16){
        std::cout<<"Grade: 16+"<<std::endl;
    }
    else{
        std::cout<<"Grade: "<<readability(text)<<std::endl;
    }   
}