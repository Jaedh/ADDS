#include <iostream>
#include <string>

int iterative(std::string a){
    for(auto& i: a){
        if(isdigit(i)){
            return int(i)-48;
        }
    }
    return -1;
}

std::string head(std::string a){
    if(a.size() == 1){
        return a;
    }
    
    if(isdigit(a[0])){
        std::string s(1,a[0]);
        return s;
    }

    return head(a.erase(0,1));
}

int main(void){
    std::string a = "Hello2you4";
    std::cout<<iterative(a)<<std::endl;
    std::cout<<head(a)<<std::endl;
}