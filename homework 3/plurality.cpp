#include"candidate.h"
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
bool check(){
    if(!std::cin){
        if(std::cin.eof()){
            std::exit(0);
        }
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        return true;
    }
    return false;
}
int getNumvoters(){
    int numvoters;
    while(true){
        std::cout<<"Number of voters:";
        std::cin>>numvoters;
        if(check()){
            std::cout<<"Oops,Please type again\n";
            continue;
        }
        else if(numvoters<=0){
            std::cout<<"Oops,Please input numbers that are >0\n";
            continue;
        }
        std::cin.ignore(1000,'\n');
        return numvoters;
    }
}
int main(void){
    int numVoters{getNumvoters()};
    std::cout<<"Candidate names:";
    std::vector<Candidate>candidates{};
        std::string line;
        std::getline(std::cin,line);
        std::istringstream iss(line);
        std::string name;
        while(iss>>name){
        candidates.emplace_back(name);
        }
    for(int j=0;j<numVoters;j++){
        std::cout<<"Vote:";
        std::string name;
        std::cin>>name;
        for(int k=0;k<candidates.size();k++){
            if(name==candidates[k].getname()){
                candidates[k].addVotes();
            }
        }
    }
    int max{0};
    for(int t=0;t<candidates.size();t++){
        if(candidates[t].getVotes()>max){
            max=candidates[t].getVotes();
        }
}for(int u=0;u<candidates.size();u++){
    if(candidates[u].getVotes()==max){
        std::cout<<candidates[u].getname()<<std::endl;
    }
}
return 0;
}