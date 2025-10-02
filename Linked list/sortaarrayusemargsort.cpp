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
    int n,m, total;
    cin >> n;
    int arr[n];
    //int arr2[m];
    for(int i=0;i<n;i++){
        // cout << i+1  <<" -> ";
        cin >> arr[i];
       // cout << i+1 <<" -> ";


    }
    cin >> m;
    int arr2[m];
    for(int i=0;i<m;i++){
        // cout << i+1  <<" -> ";
        
        cin >> arr2[i];


    }
    node* head1=nullptr;
     for(int i=0;i<n;i++){
        insert(head1,arr[i]);
     }

      node* head2=nullptr;
     for(int i=0;i<m;i++){
        insert(head2,arr2[i]);
        
     }
     total=m+n;


     int mergesort[total];
     for(int i=0;i<n;i++){
        mergesort[i]=arr[i];


     }
     for(int i=0;i<m;i++){
        mergesort[n+i]=arr2[i];


     }

     sort(mergesort,mergesort+total);

     node*mergeHead =nullptr;
     for(int i=0;i<total;i++){
        insert(mergeHead,mergesort[i]);
        

      //  printList(mergeHead);



     }
         printList(mergeHead);

     





   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
