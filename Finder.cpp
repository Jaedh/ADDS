#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        vector<string> prefixes;
        size_t temp;

        for(size_t i = 1; i <= s2.size(); i++){
            result.push_back(-1);
            prefixes.push_back(s2.substr(0,i));
        }

        for(size_t i = 0; i <= prefixes.size(); i++){
            temp = s1.find(prefixes[i]);
            if (temp != string::npos) {
                result[i] = temp;
            }else{
                return result;
            }          
        }
        return result;
    }

   