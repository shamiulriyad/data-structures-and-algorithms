#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

// Function to add a node at the beginning of the list
void addFirst(struct node **head, int val) {
    // Create a new node
    struct node *newNode = new struct node;  // Use 'new' instead of malloc
    newNode->data = val;
    newNode->next = *head;

    *head = newNode;
}

// Function to print the linked list
void printList(struct node *head) {
    struct node *temp = head;

    // Iterate through the entire linked list and print the data
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    struct node *head = NULL;

    addFirst(&head, 10);
    addFirst(&head, 20);
    addFirst(&head, 30);

    printList(head);

    return 0;
}
