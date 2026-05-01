#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
     Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
}; 
void insart(Node*& head,int val){
    Node*newNode=new Node(val);
    if(head==nullptr) {
        head =newNode;
        return;
    }
    Node*temp =head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}



void sum(Node* head){
    int sum=0;
    int count=0;
    Node*temp=head;
    while(temp!=nullptr){
        count++;
        sum+=temp->data;
        temp=temp->next;
    }
    cout <<"Count: "<< count << endl;
    cout <<"Sum: " << sum << endl;

}

int main(){
    int n;
      cin >> n;
    Node* head=nullptr;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        insart(head, val);
    }
    
    sum(head);
}