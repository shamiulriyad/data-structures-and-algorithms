#include<iostream>
using namespace std;
void printArray(int A[], int n){
    if(n==0){
        return;
    }
    printArray(A, n-1);
    cout<<A[n-1]<<endl;
}
int main(){
    int A[] = {10,20,30,40,50};
    printArray(A,5);
    return 0;
}
