#include <bits/stdc++.h>
using namespace std;
struct Node {
    string data;
     Node* next;
    Node(string val) {
        data = val;
        next = nullptr;
    }
}; 
void insart(Node*& head,string val){
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

void printList(Node* head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data << "->";
        temp=temp->next;
    }
    cout <<"END\n";
}

int main(){
    int n;
      cin >> n;
    Node* head=nullptr;
    for(int i=0;i<n;i++) {
        string val;
        cin >> val;
        insart(head, val);
    }
    printList(head);
}