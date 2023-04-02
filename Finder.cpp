#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
        vector<int> result;
        size_t temp = 0;

        for(size_t i = 1; i <= s2.size(); i++){
            if(temp != -1){             
                temp = s1.find(s2.substr(0,i), temp);
            }               
            result.push_back(temp);
        }
        return result;
    }