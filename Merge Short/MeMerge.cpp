#include<bits/stdc++.h>

using namespace std;
void mergeshort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    // l---->left;
    //r-----> RIGHT

    int mid = (l+r)/2;
    mergeshort(arr,l,mid); // left half reverse call
    mergeshort(arr,mid+1,r); // right half reverse call
    merge(arr,l,r);
    return ;


}


int  main(){





    return 0;
}