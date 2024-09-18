#include<iostream>
using namespace std;
int main()
{
    
   int  arr[] = {1, 4, 6, 7, 8, 8, 5, 8, 102};
   int sum=0;
   
   for(int i=0; i<9; i++){
    for (int j=0; j <9-i-1; j++){
        if(arr[j] < arr[j+1]){
            swap (arr[i] , arr[i+1]);
        }
    }
   }
   for(int i=0; i<9; i++){
    cout << arr[i]  <<endl;
   
  
   }
   return 0;

}