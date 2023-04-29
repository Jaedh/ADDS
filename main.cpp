#include "LinkedList.h"
#include "Node.h"
#include "BigNumCalc.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <limits>

using namespace std;

vector<int> split_to_ints(string input,string valid) {
    size_t startPos = 0;
    size_t endPos;
    size_t subStringLength;
    vector <int> result;
    do {
    endPos = input.find_first_not_of(valid, startPos);
    // if not found in string...
    if (endPos == string::npos) {
    subStringLength = input.length();
    }
    // otherwise,
    else {
    subStringLength = endPos - startPos;
    }
    result.push_back(stoi(input.substr(startPos, subStringLength)));
    startPos = input.find_first_of(valid, endPos);
    }
    while (endPos != string::npos);
    return result;
}

void test(){
    // take-in inputs -- note this code assumes for a valid input format!
    string user_input;
    getline(cin, user_input);
    // cut out the numbers from user_input & place into vector of ints
    string numeric_characters = "-0123456789";
    vector<int> numeric_inputs = split_to_ints(user_input, numeric_characters);
    // copy all (but last 2) digits from vector into a c-array (to be passed into
    // LinkedList constructor)
    int array_size = numeric_inputs.size()-2;
    int * input_array = new int[array_size];
    for(unsigned int i = 0; i < (numeric_inputs.size()-2); i++) {
    input_array[i] = numeric_inputs[i];
    }
    // then, copy the last 2 digits from user_input (ie the parameters) into a
    // parameter array
    int param_array[2] = {
    numeric_inputs.at(numeric_inputs.size()-2),
    numeric_inputs.at(numeric_inputs.size()-1)
    };
    // finally, copy the letter code into a new variable
    string commandCode;
    for(unsigned int i = 0; i < user_input.length(); i++) {
    if(isalpha(user_input[i])) {
    commandCode.push_back(user_input[i]);
    }
    }
    // create list based on input data & array size
    LinkedList submissionList(input_array, array_size);
    // run function on the list depending on letter code, using the parameters
    if (commandCode=="I") {
    submissionList.insertPosition(param_array[0], param_array[1]);
    }
    else if (commandCode=="D") {
    if (!submissionList.deletePosition(param_array[0])) {
    cout << "ERROR ";
    }
    }
    else if (commandCode=="S") {
    int got = submissionList.search(param_array[0]);
    if (got == -1) {
    cout << "ERROR ";
    }
    else {
    std::cout << got << " ";
    }
    }
    else if (commandCode=="G") {
    int got = submissionList.get(param_array[0]);
    if (got == numeric_limits<int>::max()) {
    cout << "ERROR ";
    }
    else {
    std::cout << got << " ";
    }
    }
    else {
    cout << "invalid command" << endl;
    }
    submissionList.printList();
}

int main(void){

// test();

    int array[5] = {1,2,3,4,5}; 
    LinkedList* l = new LinkedList(array, 5);
    LinkedList* l2 = new LinkedList();


    l->printList();
    
    l->insertPosition(3,77);
    l->printList();

    l->insertPosition(33,88);
    l->printList();

    l->insertPosition(1,11);
    l->printList();

    l2->printList();
    l2->insertPosition(3,77);
    l2->printList();

    l2->insertPosition(33,88);
    l2->printList();

    l2->insertPosition(1,11);
    l2->printList();


    std::cout<<l->deletePosition(3)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(10)<<std::endl;
    std::cout<<l->deletePosition(-10)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(1)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(6)<<std::endl;
    l->printList();

    std::cout<<l->search(69)<<std::endl;
    l->printList();

    std::cout<<l->get(-10)<<std::endl;
    l->printList();

    l->~LinkedList();

    l->printList();

    // std::string a = "123456789";
    // BigNumCalc* j = new BigNumCalc();

    // std::list<int> k = j->buildBigNum(a);
    // for(auto& i: k){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // std::list<int> r = j->add(k,k);     
    // for(auto& i: r){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    

    // std::list<int> m = j->sub(r,k);     
    // for(auto& i: m){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;   

    // std::list<int> ko = j->buildBigNum("9999");
    // std::list<int> ko1 = j->buildBigNum("123456789");

    // for(auto& i: ko1){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl; 

    // std::list<int> op = j->mul(ko1,ko);

    // for(auto& i: op){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl; 


    // std::cout<<std::endl;     
    // std::list<int> k1o = j->buildBigNum("1111111101");
    // std::list<int> k1o1 = j->buildBigNum("11111111010");
    // std::list<int> o1p = j->add(k1o1,k1o);

    // for(auto& i: o1p){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;     

    // std::list<int> t1 = j->buildBigNum("9876543210");
    // std::list<int> t2 = j->buildBigNum("1234567890");
    // std::list<int> t3 = j->sub(t1,t2);
    // for(auto& i: t3){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl; 

    // std::list<int> test;
    // std::list<int> test2;
    // for (int i = 0; i < 10; i++){
    //     test.push_back(i);
    // }
    // std::list<int>::iterator itr = test.begin();
    // for (int i = 0; i < 15; i++){
    //     test2.push_back((*itr));
    //     ++itr;
    // }
    // std::cout<<std::endl;

    // for(auto& i: test){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    

    // for(auto& i: test2){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    
    
    
}