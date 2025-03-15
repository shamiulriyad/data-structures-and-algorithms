#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string result = "";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == '0'){
            result +='0';
        }
        else if(s[i]=='1'){
            result+='1';
        }
        else if(s[i]=='6'){
            result+='9';
        }
        else if(s[i]=='8'){
            result+='8';
        }
        else if(s[i]=='9'){
            result+='6';
        }
    }
    cout << result;
}