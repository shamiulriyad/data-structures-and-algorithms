#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.pop();
    stack.pop();
    stack.pop();
    cout << stack.size();
    stack.pop();
    stack.pop();
    stack.pop();
    // cout << stack.top();
    // cout << stack.top();

}