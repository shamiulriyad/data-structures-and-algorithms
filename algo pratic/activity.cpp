#include <bits/stdc++.h>
using namespace std;

class cmhg{
    public:
    string name;
    cmhg(string name){
        this->name=name;
    }


};

bool compire(pair<int,int>a,pair<int,int>b){
    return (a.second <b.second);
}

void activityselection(vector<pair<int,int>>&v){
    sort(v.begin(),v.end(),compire);
    
    int endtime=v[0].second;

    cout << v[0].first << " " <<v[0].second << endl;
    int n=v.size();
    for(int i=1;i<n;i++){
        if(v[i].first>=endtime){
           
            endtime=v[i].second;
            cout << v[i].first << " " << v[i].second << endl;
        }
    }

    
}

// bool compire(pair<int,int>a,pair<int,int>b){
//     return (a.second <b.second);
// }

int main(){
    int n;
    cin >> n;
    string name;
     vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin  >> name;
         cin>> v[i].first >> v[i].second;
        
    }

    // vector<pair<int,int>> v(n);

    // for(int i=0;i<n;i++){
    //     cin>> v[i].first >> v[i].second;
    // }
    activityselection(v);
    
   

}