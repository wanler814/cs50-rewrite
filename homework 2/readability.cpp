#include<iostream>
#include<cctype>
#include<cmath>
int getcount(const std::string& text){
    int sum=0;
    for(int i=0;i<text.length();i++){
        if(std::isalpha(text[i])){
            sum++;
        }
    }
    return sum;
}
int getwordcount(const std::string& text){
    int sum=0;
    for(int i=0;i<text.length();i++){
        if(std::isspace(text[i])){
            sum++;
        }
    }
    return sum+1;
}
int getsentencecount(const std::string& text){
    int sum=0;
    for(int i=0;i<text.length();i++){
        if(text[i]=='.' || text[i]=='!' || text[i]=='?' ){
            sum++;
        }
    }
    return sum;
}
int readability(const std::string& text){
    int letters=getcount(text);
    int words=getwordcount(text);
    int sentences=getsentencecount(text);
    float L=(float)letters/words*100;
    float S=(float)sentences/words*100;
    int index=round(0.0588*L-0.296*S-15.8);
    return index;
}