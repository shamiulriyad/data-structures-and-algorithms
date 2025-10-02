#include<bits/stdc++.h>

const int INF = 1e9;

using namespace std;


struct crosingsum
{
    /* data */
    int sum;
    int leftindex;
    int rightindex;
};

crosingsum sumofsubarray(vector<int>a,int first, int mid, int last){
    int lsum=0;
    int lmax=-INF;
    int lmaxindex=-1;

    for(int i=mid;i>=first;i--){
        lsum=lsum+a[i];
        if(lsum>lmax){
            lmax=lsum;
            lmaxindex=i;
        }
    }
    int rsum=0;
    int rmax=-INF;
    int rmaxindex=-1;
    for(int i=mid+1;i<=last;i++){
        rsum=rsum+a[i];
        if(rsum >rmax){
            rmax=rsum;
            rmaxindex=i;
        }
    }
    return { lmax+rmax,lmaxindex,rmaxindex};


}

crosingsum usedividerconcure(vector<int>&a,int first,int last){
   // crosingsum result;

    if(first==last){
        return {a[first],first,last};
    }
    int mid = ((first+last)/2);

    crosingsum lsum= usedividerconcure(a,first,mid);
    crosingsum rsum = usedividerconcure(a,mid+1,last);
    crosingsum sumof_cross= sumofsubarray(a,first,mid,last);

  crosingsum maximumsubarray(crosingsum lsum, crosingsum rsum, crosingsum crossum);


}

crosingsum maximumsubarray(crosingsum lsum, crosingsum rsum, crosingsum crossum ){
    if(lsum.sum>=rsum.sum && lsum.sum>=crossum.sum){
        return lsum;
    }
    else if(rsum.sum>=lsum.sum && rsum.sum>=crossum.sum){
        return rsum;
    }
    else{
        return crossum;
    }
}





int main(){
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
     crosingsum result =usedividerconcure(a,0,n-1);
     cout << "sum" << result.sum  << "\n" << endl;
     cout << "Left Index = " << result.leftindex << endl;
      cout << "Right Index = " << result.rightindex << endl;

}