#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* remove_node(Node *head, Node *node)
{
    // if delete the first node
    if (node == head) {
        head = node->next;
        free(node);
        return head;
    }
    // if deleate another node

    Node *current_node = head;
    while (current_node != NULL) {
        if (current_node->next == node) {
            break;
        }
        current_node = current_node->next;
    }

    if (current_node == NULL) {
        return head;
    }

    current_node->next = node->next;
    free(node);
    return head;
}

Node* find_node(Node* head, int x) {
    while (head != NULL) {
        if (head->data == x) return head;
        head = head->next;
    }
    return NULL;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

void solve(int tc)
{
    int n;
    cin >> n;

    Node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* new_node = new Node{val, NULL};
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    int x;
    cin >> x;

    Node* node_to_remove = find_node(head, x);
    if (node_to_remove == NULL) {
        cout << "Value not found\n";
    } else {
        head = remove_node(head, node_to_remove);
        printList(head);
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
    }

    return 0;
}
