#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = nullptr;


    }


};


void insert(node*& head, int val) {
    node* newNode = new node(val);
    if(!head){

        head = newNode;
        return;


    }
    node* temp = head;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;


}

void printList(node* head){
    while(head){
        cout << head->data;
        if(head->next){
            cout << " -> ";

        }
        
        
        head = head->next;
    }
    cout << endl;
}






void solve(int tc)
{
    int n;
    cin >> n;
    int arr[n];
    //int arr2[m];
    for(int i=0;i<n;i++){
        // cout << i+1  <<" -> ";
        cin >> arr[i];
       // cout << i+1 <<" -> ";


    }
     node* head = nullptr;
    if(n > 0){
        insert(head, arr[0]); 
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                insert(head, arr[i]);
            }
        }
    }

    printList(head);
   
    
    


    
   


   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
  //  cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
