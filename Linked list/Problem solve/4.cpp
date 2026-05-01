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
    cout <<endl;
}
bool deletenode(Node*& head,int a){
   if(head==nullptr){
    return false;
   }
   if(head->data==a){
    Node*temp=head;
    head=head->next;
    delete temp;
    return true;
   }
    Node*temp=head;
    while(temp->next!=nullptr && temp->next->data!=a){
        temp=temp->next;
    

    }
    if(temp->next ==nullptr){
        return false;
    }


    Node*del=temp->next;
    temp->next=temp->next->next;
    delete del;
    return true;
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
    int a;
    cin >> a;
    cout << "Before: ";
    printList(head);

    if(!deletenode(head,a)){
        cout << " Not found\n";
    }
    else{
         cout << "After:  ";
    printList(head);

    }

    
}