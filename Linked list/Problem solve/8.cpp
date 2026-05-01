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

void printList(Node* head,int k){
    if(k<=0){
        cout<<"Invalid\n";
        return;
    }
    Node*temp1=head;
    Node*temp2=head;
    for(int i=0;i<k;i++){
        if(temp2==nullptr){
            cout<<"Invalid\n";
            return;
        }
        temp2=temp2->next;
    }
    while(temp2!=nullptr){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    cout << "Kth from end:" << temp1->data << endl;

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
    int k;
    cin >> k;
    printList(head, k);
}