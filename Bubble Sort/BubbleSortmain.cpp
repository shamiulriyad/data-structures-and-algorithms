/*
Bubble Sort Time Complexity

    O(n2)

*/


#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-1; j++){
            if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1]=temp;

            }
        }

    }
    for(int i=0; i<n; i++){
        cout << a[i]<< " ";
    }
    cout << endl;

    return 0;
}
