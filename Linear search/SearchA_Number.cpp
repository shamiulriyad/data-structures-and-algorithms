/*
Assignment 1: 
-> take the size of the vector from user
-> take the data from the user
-> take the number need to search from user
-> count how much that number has come in the data

suppose,
input: 
7 [size of vector]
1 2 3 1 1 3 4 [data of vector]
1 [number need to search]

output:
3

*/

#include <iostream>
#include<vector>
using namespace std;

int main() {

    int n, sn;
    std:vector<int>vec;

    std::cout<<"Enter the size of the vector :";
    std::cin>> n;
    vec.resize(n);

    for(int i=0; i< n; i++){
    std::cin>>vec[i];
    }
    std::cout << "enter the serch number :";
    std:: cin >> sn;
    int ind = 0;
    for(int i=0; i< n; i++){
        if(vec[i]== sn){
           ind++;

        }
    }
    if(ind==0){
        std:: cout <<" found no number "<< std::endl;
    }
    else{
        std::cout<< "Get the number " << ind << std:: endl;
    }


  return 0;
}