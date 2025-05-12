#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(20);
    q.pop();
    q.push(30);
    q.push(40);
    q.pop();
    q.push(50);
    q.push(60);
    q.pop();
    q.push(70);
    q.pop();
   // cout << q.size()<< endl;
    cout << q.top()<< endl;
    q.pop();
    q.pop();
    cout << q.size() << '\n';
    q.pop();
    q.pop();
    q.pop();
    //cout << q.pop();
     cout << q.top();

}