https://www.spoj.com/problems/MPOW/


#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

#define N 101
ll ar[N][N],I[N][N];


void mul(ll A[][N],ll B[][N],ll dim)
{
    ll res[dim+1][dim+1];
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(ll k=0;k<dim;k++)
            {
                ll x =(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}

void power(ll A[][N],ll dim,ll n)
{
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            if(i==j)I[i][j]=1;
            else I[i][j]=0;
        }
    }

    while(n)
    {
        if(n%2)
        {
            mul(I,A,dim);
            n--;
        }
        else
        {
            mul(A,A,dim);
            n/=2;
        }
    }
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)A[i][j]=I[i][j];
    }
}


void prllmat(ll ar[][N],ll dim)
{
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)cout<<ar[i][j]<<" ";
        cout<<nl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll dim,n;
        cin>>dim>>n;
        for(ll i=0;i<dim;i++)
        {
            for(ll j=0;j<dim;j++)cin>>ar[i][j];
        }
        power(ar,dim,n);
        prllmat(ar,dim);
    }
    return 0;
}
