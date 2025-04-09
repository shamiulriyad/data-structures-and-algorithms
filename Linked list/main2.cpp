#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* nxt;

    Node(int val)
    {
        this->val = val;
        this->nxt = NULL;
    }
};

void insertNodeAtTail(Node** head, int val)
{
    if(*head == NULL)
    {
        *head = new Node(val);
    }

    else
    {
        Node* curr;
        for(curr = *head; curr->nxt != NULL; curr = curr->nxt)
        {}

        curr->nxt = new Node(val);
    }
}

void solve(int tc)
{
    int i, n, x;
    cin >> n;

    Node* head = NULL;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        insertNodeAtTail(&head, x);
    }

    Node* curr;
    for(curr = head; curr != NULL; curr = curr->nxt)
    {
        cout << curr->val << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt=1;
    cin >> tt;
    
    for(tc=1; tc<=tt; tc++)
    {
        solve(tc);
        cout << '\n';
    }

    return 0;
}