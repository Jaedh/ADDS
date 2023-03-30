#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        size_t temp;

        for(size_t i = 1; i <= s2.size(); i++){
            result.push_back(-1);
        }

        for(size_t i = 1; i <= s2.size(); i++){
            temp = s1.find(s2.substr(0,i));
            if (temp == -1) {
                return result;
            }                  
            result[i-1] = temp;
        }
        return result;
    }

   