#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::ws;
int main(void){
    cout<<"Enter your full name:";
    string name{};
    getline(cin>>ws,name);
    cout<<"Enter your age:";
    int x{};
    cin>>x;
    cout<<"Your age+your name=:"<<x+name.length();
    return 0;
}