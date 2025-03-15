#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int number =1;
    for(int i=1; i<n;i++){
        number = (number+i)%n;
       if(number==0) number =n;
        if(i>1) cout << " ";
        cout << number ;
    }
}