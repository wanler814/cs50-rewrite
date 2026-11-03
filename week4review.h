#include<iostream>
#include<string>
class Candidate{
    std::string m_Candidates;
    int m_votes{0};
    public:
    Candidate(const std::string&Candidates);
    int addvotes();
    const void getname();
    const void getvotes();
};