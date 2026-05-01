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

void printList(Node* head){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data << " ";
        temp=temp->next;
    }
    cout <<"\n ";
}
Node* marege(Node* c, Node* d){
    if(c==nullptr){
        return d;
    }
    if(d==nullptr){
        return c;
    }
    Node* result=nullptr;
    if(c->data < d->data){
        result=c;
        result->next=marege(c->next,d);
    }
    else{
        result=d;
        result->next=marege(c,d->next);
    }
    return result;
}

int main(){
    int n1,n2;
      cin >> n1;
    Node* head=nullptr;
    for(int i=0;i<n1;i++) {
        int val;
        cin >> val;
        insart(head, val);
    }
    cin >> n2;
    Node* head2=nullptr;
    for(int i=0;i<n2;i++) {
        int val;
        cin >> val;
        insart(head2, val);
    }

    cout << "List 1: ";
    printList(head);
    cout << "List 2: ";
    printList(head2);
    Node* merged = marege(head, head2);
    cout << "Merged: ";
    printList(merged);
}