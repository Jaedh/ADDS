#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
        vector<int> result;
        result.reserve(s2.size());
        map<string, size_t> permuations;

        for(size_t i=s1.size(); i >= 1; i--){
            for(size_t j=s1.size()-i; j >= 1; j--){
                // std::cout<<s1.substr(i,j)<<std::endl;
                permuations[s1.substr(i-1,j)] = i-1;
            }
            // std::cout<<std::endl;
        }


        // for (auto const &pair: permuations) {
        //     std::cout << "{" << pair.first << ": " << pair.second << "}\n";
        // }    


        for(size_t i=1; i<=s2.size(); i++){
            if(permuations.find(s2.substr(0,i))==permuations.end()){
                result.push_back(-1);
            }else{
                result.push_back(permuations[s2.substr(0,i)]);
            }
        }

        return result;
    }

   /*
           vector<int> result;
        size_t temp;

        for(size_t i = 1; i <= s2.size(); i++){
            if(temp != -1){             
                temp = s1.find(s2.substr(0,i));
            }               
            result.push_back(temp);
        }
        return result;
   */



  /*
          for(size_t i=0; i < s1.size(); i++){
            for(size_t j=1; j < s1.size()-i; j++){
                // std::cout<<s1.substr(i,j)<<std::endl;
                permuations[s1.substr(i,j)] = i;
            }
            // std::cout<<std::endl;
        }
  */