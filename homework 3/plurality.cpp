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
    std::vector<Candidate>candidates{};
        while(true){
        std::cout<<"Candidate names:";
        std::string line;
        if(!std::getline(std::cin,line)){
            return 1;
        }
        std::istringstream iss(line);
        std::string name;
        bool duplicate=false;
        std::vector<Candidate> parse{};
        while(iss>>name){
            bool already=false;
            for(const auto&c:parse){
                if(c.getname()==name){
                    already=true;
                    break;
                }
            }
            if(already){
                duplicate=true;
                break;
            }
            parse.emplace_back(name);
        }
        if(parse.empty()){
            std::cout<<"NO MEMBER INPUT"<<std::endl;
            continue;
        }
        if(duplicate){
            std::cout<<"YOU INPUT SAME CANDIDATE TWICE"<<std::endl;
            continue;
        }
        candidates=std::move(parse);
        break;
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