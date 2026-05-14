#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    cin.ignore();
    stack<string>a;
    for(int i=0;i<n;i++) {
        string c;
        getline(cin,c);

        if(c =="BACK"){
            if(a.empty()){
                cout <<"No previous page"<< "\n";
            }
            else{
                a.pop();
                if(a.empty())
                {
                    cout <<"No previous page"<< "\n";
                }
                else
                {
                    cout <<"Current: "<< a.top() << "\n";
                }
            }
        } 
        else 
        {
            string url =c.substr(6);
            a.push(url);
            cout << "Current: "<< url<< "\n";
        }
    }

    return 0;
}