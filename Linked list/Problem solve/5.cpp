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
void  printlist(Node* head,int a){
    int b=1;
    bool c=false;
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==a){

            cout << b << endl;
            c=true;
            
        }
        temp=temp->next;
        b++;
    }
    if(!c){
        cout << "Not found";
    }
    cout << endl;
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

    printlist(head,a);
  
   

   
  

    

    
}