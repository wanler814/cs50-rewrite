#include<iostream>
#include<fstream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<vector>
bool compare(const std::pair<std::string,int>&a,const std::pair<std::string,int>&b){
    if(a.second!=b.second)
    return a.second>b.second;
    return a.first>b.first;
}

int main(void){
    std::unordered_map<std::string,int> freq;
    std::ifstream inf("input.txt");
    while(!inf){
        std::cerr<<"No file existed"<<std::endl;
        return 1;
    }
    std::string word;
    while(inf>>word){
        ++freq[word];
    }
    std::vector<std::pair<std::string,int>> arr{freq.begin(),freq.end()};
    //意思是：“从 first 这个位置开始，到 last 之前，把每一个元素搬进新 vector。”//
    std::sort(arr.begin(),arr.end(),compare);
    std::size_t length{freq.size()};
    for(std::size_t i=0;i<length;i++){
        std::cout<<arr[i].first<<":"<<arr[i].second<<std::endl;
    }
    return 0;
}