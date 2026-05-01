#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// 🔸 Insert at Head
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val); // new node create
    newNode->next = head;          // new node -> old head
    head = newNode;                // head update
}

// 🔸 Insert at Tail
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) { // empty list
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) { // last node খুঁজি
        temp = temp->next;
    }

    temp->next = newNode; // attach
}

// 🔸 Insert at Position (1-based index)
void insertAtPosition(Node* &head, int pos, int val) {
    if (pos == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) return; // invalid position

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

// 🔸 Delete Head
void deleteHead(Node* &head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp; // memory free
}

// 🔸 Delete by Value (first occurrence)
void deleteByValue(Node* &head, int val) {
    if (head == NULL) return;

    if (head->data == val) {
        deleteHead(head);
        return;
    }

    Node* temp = head;

    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next == NULL) return; // not found

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

// 🔸 Print..
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    printList(head); // 10 20 30

    insertAtHead(head, 5);
    printList(head); // 5 10 20 30

    insertAtPosition(head, 3, 15);
    printList(head); // 5 10 15 20 30

    deleteHead(head);
    printList(head); // 10 15 20 30

    deleteByValue(head, 20);
    printList(head); // 10 15 30

    return 0;
}