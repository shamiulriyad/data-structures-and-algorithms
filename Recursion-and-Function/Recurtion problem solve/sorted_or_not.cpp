#include<bits\stdc++.h>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restarray = sorted(arr+1, n-1);
    return (arr[0] < arr[1] &&restarray);
}
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for(int i=1; i<=a; i++){
        cin >> arr[i];

    }
    cout << sorted(arr , a) << endl;

}