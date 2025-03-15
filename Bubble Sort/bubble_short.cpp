#include<iostream>
using namespace std;
int main()
{
   int  arr[]={5 , 6 , 8,9,10,7 ,4 ,7,9,100,200,7,56};
   for(int i=0; i<13; i++){
    for (int j=0; j <13-i; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j] , arr[j+1]);
        }
    }
   }
   for(int i=0; i<13; i++){
    cout << arr[i] << endl;
   }
   return 0;
}