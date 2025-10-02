#include<bits/stdc++.h>

using namespace std;


struct maxmin
{
    /* data */
    int max;
    int min;
};

maxmin usedividerconcure(vector<int>&a,int first,int last){
    maxmin result;

    
    if(first==last) {
        result.max=a[first];
        result.min=a[last];
        return result;
    }
    int mid=((first+last)/2);
    maxmin left=usedividerconcure(a,first,mid);
    maxmin right =usedividerconcure(a,mid+1,last);


    result.max = max(left.max, right.max);
    result.min = min(left.min, right.min);

    return result;






}


int main(){
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    maxmin ans = usedividerconcure(a,0,n-1);

    cout<< "maximum" << ans.max << endl;
    cout << "minimum" << ans.min << endl;
}