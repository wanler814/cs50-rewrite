#include"candidate.h"
#include<iostream>
#include<string>
int main(int argc,char*argv[]){
    int numCandidates=argc-1;
    Candidate candidates[1000];
    for(int m=0;m<numCandidates;m++){
        candidates[m]=Candidate{std::string{argv[m+1]}};
    }
    int numVoters;
    std::cout<<"Number of voters:";
    std::cin>>numVoters;
    std::cin.ignore();
    std::cout<<numVoters<<std::endl;
    for(int j=0;j<numVoters;j++){
        std::cout<<"Vote:";
        std::string name;
        std::getline(std::cin,name);
        for(int k=0;k<numCandidates;k++){
            if(name==candidates[k].getname()){
                candidates[k].addVotes();
            }
        }
    }
    int max{0};
    for(int t=0;t<numCandidates;t++){
        if(candidates[t].getVotes()>max){
            max=candidates[t].getVotes();
        }
}for(int u=0;u<numCandidates;u++){
    if(candidates[u].getVotes()==max){
        std::cout<<candidates[u].getname()<<std::endl;
    }
}
return 0;
}