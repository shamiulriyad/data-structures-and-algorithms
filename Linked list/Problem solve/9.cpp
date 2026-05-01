#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* rev(Node*head){
    Node*prev=nullptr;
    Node*current=head;

    while(current){
        Node*nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }
    return prev;
}
void reorder(Node*& head) {
    if(!head||!head->next) {
        return;
    }

    Node*slow=head;
    Node*fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node*second=slow->next;
    slow->next=nullptr;

    second=rev(second);

    Node*first=head;

    while(second){
        Node* t1=first->next;
        Node*t2=second->next;

        first->next=second;
        second->next=t1;

        first=t1;
        second =t2;
    }
}
void printList(Node* head) {
    while(head){
        cout <<head->data << " ";
        head =head->next;
    }
    cout <<"\n";
}

int main() {
    int n;
    cin >> n;

    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;

        Node*newNode=new Node(val);

        if(!head){
            head = tail = newNode;
        }
        else{
            tail->next =newNode;
            tail=newNode;
        }
    }

    cout << "Before: ";
    printList(head);

    reorder(head);

    cout << "After: ";
    printList(head);

    return 0;
}