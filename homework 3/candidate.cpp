#include<iostream>
#include<string>
#include"candidate.h"
Candidate::Candidate(const std::string& name):
m_name{name}
{
}
void Candidate::addVotes(){
    m_votes++;
}
int Candidate::getVotes()const{
    return m_votes;
}std::string Candidate::getname() const{
    return m_name;
}
