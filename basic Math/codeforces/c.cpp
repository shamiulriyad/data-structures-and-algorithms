#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;
    vector<int> a = {a1,a2,a3};
    sort(a.begin(), a.end());
    a1 = a[0];
    a2 = a[1];
    a3 = a[2];
    if(a3 - a2 == a2 - a1){ 
    
        cout << "Yes" << endl;
    }
    else{ 
    
        cout << "No" << endl;
    }
}