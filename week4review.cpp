#include"week4review.h"
#include <iostream>
#include <string>
    Candidate::Candidate(const std::string&Candidates)
    :m_Candidates{Candidates}
    {std::cout<<"zaizheligouzaochenggong";};
    int Candidate::addvotes(){
        m_votes++;
        return m_votes;
    }
    const void Candidate::getname(){
        std::cout<<m_Candidates<<std::endl;
    }
    const void Candidate::getvotes(){
        std::cout<<m_votes;
    }

