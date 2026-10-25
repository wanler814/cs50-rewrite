#pragma once
#include<iostream>
#include<string>
class Candidate{
    std::string m_name;
    int m_votes{0};
    public:
    Candidate()=default;
    Candidate(const std::string& name);
    void addVotes();
    int getVotes() const;
    std::string getname() const;
};