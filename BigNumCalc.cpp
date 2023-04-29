#include "BigNumCalc.h"
#include <iostream>
#include <algorithm>

BigNumCalc::BigNumCalc(){

}

BigNumCalc::~BigNumCalc(){

}

std::list<int> BigNumCalc::buildBigNum(std::string numString){
    std::list<int> result;
    for (int i = 0; i < numString.size(); i++){
        if(isdigit(numString[i])){
            result.push_back(int(numString[i])-48);
        }
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2){
    if(num1.empty()){
        return num2;
    }else if(num2.empty()){
        return num1;
    }    

    std::list<int> result;
    int len = std::max(num1.size(), num2.size());
    num1.reverse();
    num2.reverse();
    int overflow = 0;
    int value = 0;

    for (int i = 0; i < len - num1.size(); i++){
        num1.push_back(0);
    }
    for (int i = 0; i < len - num2.size(); i++){
        num2.push_back(0);
    }


    std::list<int>::iterator it1 = num1.begin();
    std::list<int>::iterator it2 = num2.begin();
    for (int i = 0; i < len; i++){
        value = *it1 + *it2 + overflow;
        result.push_front(value%10);
        overflow = (value/10)%10;
        ++it1;
        ++it2;
    }
    result.push_front(overflow);
    
    std::list<int>::iterator itr = result.begin();
    while(itr!=result.end()&&*itr==0){
        itr = result.erase(itr);
        continue;
        itr++;
    }
    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2){
    if(num1.empty()){
        return num2;
    }else if(num2.empty()){
        return num1;
    }    
        
    std::list<int> result;
    int len = std::max(num1.size(), num2.size());
    num1.reverse();
    num2.reverse();
    int overflow = 0;
    int value = 0;

    for (int i = 0; i < len - num1.size(); i++){
        num1.push_back(0);
    }
    for (int i = 0; i < len - num2.size(); i++){
        num2.push_back(0);
    }

    std::list<int>::iterator it1 = num1.begin();
    std::list<int>::iterator it2 = num2.begin();
    for (int i = 0; i < len; i++){
        if(*it1 - *it2 - overflow >= 0){
            value = *it1 - *it2 - overflow;
            overflow = 0;
        }else{
            value = *it1 + 10 - *it2 - overflow;
            overflow = 1;
        }
        result.push_front(value);
        ++it1;
        ++it2;
    }
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2){
    if(num1.empty()){
        return num2;
    }else if(num2.empty()){
        return num1;
    }    
        
    std::list<int> result;
    int len = num1.size();
    for (int i = 0; i < len+1; i++){
        result.push_back(0);
    }

    num1.reverse();
    num2.reverse();

    std::list<int> temp;
    std::list<int> temp2;

    std::list<int>::iterator it2 = num2.begin();
    for (int i = 0; i < num2.size(); i++){  
        int overflow = 0;
        int value = 0;          
        temp.clear();
        std::list<int>::iterator it1 = num1.begin();
        for (int j = 0; j < num1.size(); j++){
            value = *it1 * *it2 + overflow;
            temp.push_front(value%10);
            overflow = (value/10)%10;
            ++it1;
        }
        temp.push_front(overflow);
        if(i>0){
            for (int j = 0; j < i; j++){
                temp.push_back(0);
            }
        } 

        temp2.clear();
        temp2 = this->add(result,temp);
        result = temp2;
        ++it2;
    }
    
    std::list<int>::iterator itr = result.begin();
    while(itr!=result.end()&&*itr==0){
        itr = result.erase(itr);
        continue;
        itr++;
    }
    return result;
}