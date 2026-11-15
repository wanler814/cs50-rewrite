#include<iostream>
#include<string>
int countnumbers(std::istream& in){
    int n=0;
    std::string c;
    while(in>>c){
        n++;
    }
    return n;
}
int main(void){
    std::cout<<countnumbers(std::cin)<<std::endl;
}