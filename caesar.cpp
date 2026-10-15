#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
int main(int argc, char* argv[]){
    if(argc != 2){
        std::cout<<"Usage: "<<argv[0]<<" <shift>"<<std::endl;
        return 1;
    }
    for(int i=0;i<std::strlen(argv[1]);i++){
        if(!std::isdigit(argv[1][i])){
            std::cout<<"Usage: "<<argv[0]<<" <shift>"<<std::endl;
            return 1;
        }
    }
    int key=std::stoi(argv[1])%26;
    std::cout<<"plaintext:...";
    std::string plaintext{};
    std::getline(std::cin,plaintext);
    std::cout<<"ciphertext: ";
    for(int i=0;i<plaintext.length();i++){
        char c=plaintext[i];
        int sum=c+key;
        if(std::isupper(c)){
            if(sum>'Z'){
                sum=sum-26;
            }
        }
        else if(std::islower(c)){
            if(sum>'z'){
                sum=sum-26;
            }
        }
        else{
            sum=c;
        }
        plaintext[i]=sum;
}
        std::cout<<plaintext<<std::endl;
        return 0;
}