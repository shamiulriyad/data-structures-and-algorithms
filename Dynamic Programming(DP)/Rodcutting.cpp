#include<bits/stdc++.h>

using namespace std;
int length[100];
int price[100];
int memo[100][100];


void intializationmemo(int r,int c){
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            if(i==0|| j==0){
                memo[i][j]=0;
            }
            else {
                memo[i][j]=-1;
            }

        }
    }  

}



void printmemo(int r, int c){
    cout << "***************memo*******************" << endl;
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            cout << memo[i][j] << "\t" << endl;
        }
        cout << endl;
    }
    cout << "\n********************************" << endl;

}



int rodcutting(int rodlength,int items){
    if(rodlength==0 || items==0){
        return 0;
    }
    int nottaken;
    int taken;
    nottaken=0+rodcutting(rodlength,items-1);
    if(rodlength>=length[items]){
        taken=price[items]+rodcutting(rodlength-length[items],items-1);
    }
    else{
        taken=0;
    }
    //return max(taken,nottaken);
}

int main(){
    int rodlength, items;
    cout<<"enter the length of rod :" << endl;
    cin >> rodlength;
    cout<< "enter the number of item: "<< endl;
    cin >> items;
    cout << "enter the length of rod index" << endl;
    for(int i=1;i<=items;i++){
        cin >> length[i];
    }
    cout << "enter the price of rod index:" << endl;
    for(int i=1;i<=items;i++){
        cin >> price[i];
    }
    cout << "the maximum price is :" << rodcutting(rodlength,items) << endl;
    intializationmemo(items,rodlength);
    printmemo(items,rodlength);
    return 0;


}