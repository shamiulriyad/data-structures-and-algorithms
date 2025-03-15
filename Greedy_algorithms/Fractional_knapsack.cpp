#include<algorithm>
#include<utility>
#include<vector>
#include<iostream>
using namespace std;
typedef pair<int,int>PII;
vector<PII>v;
bool cmp(PII A, PII B){
    return A.second*B.first>A.first*B.second;

}
int main(){
    int n,w;
    cin>>n;
    for(int i=0;i<n;i++){
        int weight,price;
        cin>>weight>>price;
        v.push_back(PII(weight,price));
    }
   
    cin>>w;
    sort(v.begin(),v.end(),cmp);
    int ans=0;
    for(int i=0;i<n;i++){
        int ans = min(w,v[i].first);
        w-=ans;
        ans+=ans*v[i].second;
    }
    cout<<ans<< endl;
    return 0;
}
