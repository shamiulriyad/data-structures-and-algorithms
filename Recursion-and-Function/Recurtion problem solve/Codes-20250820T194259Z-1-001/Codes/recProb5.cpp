#include<iostream>
using namespace std;

int countDigits(int n){
    if(n==0){
        return 0;
    }
    int result = n/10;
    int rem = n%10;
    int count = 1;
    int returnValue = countDigits(result);
    return count+returnValue;
    // return 1+countDigits(n/10);

}


int main(){
    int n = 10040;
    int result = countDigits(n);
    cout<<"Result = "<<result<<endl;
    return 0;
}
