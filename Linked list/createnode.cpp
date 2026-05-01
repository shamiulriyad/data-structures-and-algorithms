#include <bits/stdc++.h>
using namespace std;

// Node structure define করছি
struct Node {
    int data;     // এখানে value store হবে
    Node* next;   // next node এর address রাখবে

    // constructor: node create করার সময় value set করে
    Node(int val) {
        data = val;
        next = NULL; // শুরুতে next NULL
    }
};

// tail এ insert করার function
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val); // নতুন node create

    // যদি list empty হয়
    if (head == NULL) {
        head = newNode; // new node-ই head হবে
        return;
    }

    Node* temp = head; // traversal এর জন্য temp pointer

    // last node পর্যন্ত যাওয়া
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // last node এর next এ new node লাগানো
    temp->next = newNode;
}

// linked list print করার function
void printList(Node* head) {
    Node* temp = head; // head থেকে শুরু

    // যতক্ষণ NULL না হয় traverse করবো
    while (temp != NULL) {
        cout << temp->data << " -> "; // data print
        temp = temp->next; // next node এ যাওয়া
    }

    cout << "NULL" << endl; // list শেষ
}

int main() {
    Node* head = NULL; // শুরুতে list empty

    // value insert করা
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    // list print
    printList(head);

    return 0;
}