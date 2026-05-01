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
void newprint(Node*& head,int a,int b){
    Node*newNode=new Node(a);
    if(b==0){
        newNode->next=head;
        head=newNode;
        return;
     }     
      Node* temp = head;
      
      for(int i=1;i<b-1&&temp!=nullptr;i++){
          temp=temp->next;
      }
      if(temp==nullptr){
        return;
      }
      newNode->next=temp->next;
        temp->next=newNode;

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
    int a,b;
    cin >> a >> b;
    cout << "Before: ";
    printList(head);

    newprint(head,a,b);
     cout << "After:  ";
    printList(head);

}