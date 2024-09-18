#include <iostream>
#include <cstring>
using namespace std;

// searching -> hashing
// frequency count -> hashing

int main()
{
    //0 - 10^5/10^6
    int arr[] = {5, 4, 2, 5, 7, 9, 10};
    bool hashArr[100005];
    memset(hashArr, false, sizeof(hashArr));
    for(int i = 0; i < 7; i++) {
        hashArr[arr[i]] = true;
    }
//O(m*n) -> O(m)
    int number;
    for(int j = 0; j < 5; j++) {
        cin>>number;
        if(hashArr[number] == true) {
            cout<<"Number found"<<endl;
        }
        else {
            cout<<"Number not found"<<endl;
        }
    }
    return 0;
}