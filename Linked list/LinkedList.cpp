//i want to print same number at input and delete the 3rd element and print this and delete all the element and remove odd number form this linked list.
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

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << '\n';
}

void deleteAtPosition(Node*& head, int pos) {
    if (head == nullptr || pos <= 0) return;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; ++i) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) return;
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void deleteAll(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteOddNumber(Node*& head) {
    if (!head) return;

    Node* temp = head;
    int pos = 1;
    if (pos % 2 == 1) {
        Node* nodeToDelete = temp;
        head = head->next;
        delete nodeToDelete;
    }

    temp = head;
    pos = 2;

    while (temp != nullptr && temp->next != nullptr) {
        if (pos % 2 == 1) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        } else {
            temp = temp->next;
        }
        pos++;
    }
}

void solve(int tc) {
    int n;
    cin >> n;
    Node* head = nullptr;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertAtEnd(head, val);
    }

    printList(head);              
    deleteAtPosition(head, 3);    
    printList(head);              
   // deleteAll(head);              
    //cout << "list deleted" << '\n'; 
    deleteOddNumber(head);
    cout << "odd number deleted"<< endl;
    printList(head);
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << '\n';
    }

    return 0;
}
