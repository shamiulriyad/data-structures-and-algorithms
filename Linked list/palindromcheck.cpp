#include <bits/stdc++.h>
using namespace std;

struct node{
    string data;
    node* next;
    node* prev;
    node(string val){
        data = val;


        next = nullptr;
        prev = nullptr;
   
   
   
    }
};

void insert(node*& head, string val){
    node* newNode = new node(val);
    if(!head){
        head = newNode;


        return;
    
    
    }
    node* tmi = head;
    while(tmi->next) tmi = tmi->next;
    tmi->next = newNode;
    newNode->prev = tmi;
}

// void printList(node* head){
//     while(head){
//         cout << head->data;
//         if(head->next){
//             cout << " -> ";

//         }
        
        
//         head = head->next;
//     }
//     cout << endl;
// }





bool palindromcheckkori(node* head){
    if(!head) return true;
    node* tmi = head;
    while(tmi->next) tmi = tmi->next; 

    while(head != tmi && head->prev != tmi){
        if(head->data != tmi->data){
            return false;
        }
        head = head->next;
        tmi = tmi->prev;
    }
    return true;
}

void solve(int tc){
    int n;
    cin >> n;
    node* head = nullptr;
    for(int i =0;i <n;i++){
        string val;
        cin >> val;
        insert(head, val);
    }
   // printlist(head);



    if(palindromcheckkori(head)){
         cout << "True" << endl;

    }

       
    else{

    

        cout << "False" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc, tt = 1;
   // cin >> tt;
    for(tc = 1; tc <= tt; tc++){
        solve(tc);
        cout << endl;
    }
    return 0;
}
