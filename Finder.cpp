#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    result.reserve(s2.size());
    for(size_t i = 1; i <= s2.size(); i++) {
        size_t temp = s1.find(s2.substr(0, i));
        if (temp != string::npos) {
            result.push_back(static_cast<int>(temp));
        }
    }
    return result;
    }

   