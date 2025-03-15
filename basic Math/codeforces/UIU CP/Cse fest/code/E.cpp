#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string t ,s= " ";

    cin >>t;
    int num =0;
    for(int i=1; num < n; i++){
        s+=t[num];
        num+=i;
    }
    cout << s << endl;
    

}