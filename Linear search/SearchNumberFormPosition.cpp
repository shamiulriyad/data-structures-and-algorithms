/*
Assignment 2:
-> take the size of the vector from user
-> take the data from the user
-> take the number need to search from user
-> take the which position(koto tomo) of the number need to search
-> output the number position

input:
7 [size of vector]
1 2 3 1 1 3 4 [data of vector]
1 [number need to search]
2 [koto tomo number select kora lagbe]

output:
3

eikhane 1, total 3 bar asche. 0 tomo position e, 3 tomo position e ar 4 tomo position e.. amake zehetu 2 tomo 1 khujte bolche tai 3 tomo position output hoiche


*/


#include <iostream>
#include<vector>
using namespace std;

int main() {

    int n, sn, sp;
    std:vector<int>vec;

    std::cout<<"Enter the size of the vector :";
    std::cin>> n;
    vec.resize(n);

    for(int i=0; i< n; i++){
    std::cin>>vec[i];
    }
    std::cout << "enter the serch number :";
    std:: cin >> sn;
    std::cout << "Enter the position of number : ";
    std::cin >> sp;

    int qcn=0;
    int position =-1;

    for(int i=0; i<n ; i++){
        if(vec[i] == sn){
            qcn++;
            if(qcn == sp){
                position = i;
                break;
            }
        }
    }
    if(position !=-1){
        std::cout << "The position of the number is: " << position << std::endl;

    }
    else {
       std::cout << sn << " was not found." << std::endl;
    }


    return 0;
}
