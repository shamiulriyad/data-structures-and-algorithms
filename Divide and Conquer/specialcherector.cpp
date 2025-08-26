#include <bits/stdc++.h>
using namespace std;

bool spacialcha(char ch){
     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' || (ch >='0' && ch <= '9' ))) return false; 
    return true;

}
int isspecial(vector <char> &a,int start=0, int end=0){
    if(start > end) return 0;
    if(start == end){
        if(spacialcha(a[start])) return 1;
        else return 0;
    }
    int mid=(start +(end-start)/2);
    int leftcount = isspecial(a,start,mid);
    int rightcount = isspecial(a,mid+1,end);
    return leftcount + rightcount;


}
int main(){
    string  n;
    cin >> n;
    vector<char> a(n.begin(), n.end());
     int specialCount = isspecial(a, 0, a.size() - 1);

    cout << specialCount << endl;
}
