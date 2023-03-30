#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        vector<string> prefixes;
        int temp;

        for(int i = 1; i <= s2.size(); i++){
            result.push_back(-1);
            prefixes.push_back(s2.substr(0,i));
        }

        for(int i = 0; i <= prefixes.size(); i++){
            temp = s1.find(prefixes[i]);
            if (temp != string::npos) {
                result[i] = temp;
            }            
        }
        return result;
    }

   