#include<iostream>
using namespace std;
class Result{
public:
    int max;
    int min;
};

Result maxmin(int A[],int s,int e){
    if(s==e){
        Result result;
        result.max=A[s];
        result.min=A[s];
        return result;
    }
    int mid = (s+e)/2;
    Result result1 = maxmin(A,s,mid);
    Result result2 = maxmin(A,mid+1,e);

    int fmax,fmin;

    if(result1.max>result2.max){
        fmax=result1.max;
    }else{
        fmax=result2.max;
    }
    if(result1.min<result2.min){
        fmin=result1.min;
    }else{
        fmin=result2.min;
    }

    Result fResult;
    fResult.max=fmax;
    fResult.min=fmin;

    return fResult;

}

int main(){
    int A[]={-40,5,-3,10,60,2,900};
    Result result = maxmin(A,0,6);
    cout<<"result max: "<<result.max<<endl;
    cout<<"result min: "<<result.min<<endl;
    return 0;
}

