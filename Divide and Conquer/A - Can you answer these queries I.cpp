#include <bits/stdc++.h>
using namespace std;

const int MAXN=50500;
int A[MAXN],tree[4*MAXN];

void amiparina(int n,int b,int e){
    if(b==e){tree[n]=A[b];
        return;
    
    
    
    
    }
    int mid=(b+e)/2;
    amiparina(2*n,b,mid);
    amiparina(2*n+1,mid+1,e);


    
    tree[n]=max(tree[2*n],tree[2*n+1]);
}

int copykorlemara(int n,int b,int e,int i,int j){
    if(j<b||i>e)return INT_MIN;
    if(b>=i&&e<=j)return tree[n];
    int mid=(b+e)/2;
    int p1=copykorlemara(2*n,b,mid,i,j);
    int p2=copykorlemara(2*n+1,mid+1,e,i,j);
    return max(p1,p2);
}

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>A[i];
    amiparina(1,0,n-1);
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        l--;r--;
        cout<<copykorlemara(1,0,n-1,l,r)<<endl;
    }
    return 0;
}
