// primality test is to determine whether the input is a prime or not 

#include<bits/stdc++.h>

using namespace std;

 // time complextity O(N)

bool isprime(int n){
    if(n<=1){
        return false;

    }
    for(int i=2; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << isprime(n) << endl;

}

// O(√N) Solution

/*
bool isprime(int n){
if(n<=1)reurn false;
int sqrtn=sqrt(n);
for(int i=2; i<=sqrtn;i++){
if(n%i==0)
return false;
}
return true;
}

*/