#include<bits/stdc++.h>

using namespace std;
int w[100];
int v[100];
int memo[100][100];
char pTable[20][20];


void inatializationmemo(int r,int c){
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            if(i==0|| j==0){
                memo[i][j]=0;
            }
            else{
                memo[i][j]=-1;
            }
        }
    }
}


void printmemo(int r,int c){
    cout << "************memo************" << endl;
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            cout << memo[i][j] << "\t";
        }
        cout << endl;
        
    }
    cout << "\n****************************" << endl;
}




void printPTable(int r, int c){
    cout<<"**************pTable******************"<<endl;
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            cout<<pTable[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n********************************"<<endl;

}



 // c means capacity and    
 //n means number of item
int knapsack(int c,int n){
    if(c==0|| n==0){
        return 0;
    }
    if(memo[n][c]!=-1){
        return memo[n][c];
    }
    int taken;
    int nottaken;
    nottaken= 0+knapsack(c,n-1);
    if(c>=w[n]){
        taken= v[n]+knapsack(c-w[n],n-1);

    }else{
        taken=0;
    }
    if(nottaken>=taken){
    pTable[c][n]='N';
        memo[n][c]=nottaken;
       return nottaken;
    }
     else{
    pTable[c][n]='T';
        memo[n][c]=taken;
        return taken;
    
    // (memo[n][c]=max(taken,nottaken));
    // return memo[n][c];
     }
    
}

void bottomup(int c,int n){
    for(int i=0;i<=c;i++){
        for(int j=1;j<=n;j++){
            knapsack(i,j);
        }
    }
}




void printItems(int c, int n){
    if(c==0||n==0){
        return;
    }
    if(pTable[c][n]=='N'){
        cout<<"item "<<n<<" was NOT taken"<<endl;
        printItems(c,n-1);
    }else if(pTable[c][n]=='T'){
        cout<<"item "<<n<<" was taken"<<endl;
        printItems(n-w[n],n-1);
    }

}


int main(){

    // capacity means C
    // weigth means w
    // value means v
    // value means price means v
    // number of item means n

    int c,n;
    cout << "Enter the capacity of box  : " << endl;
    cin >> c;
    cout << " enter the number of item : " << endl;
    cin >> n;
    cout << "enter the price of item : " << endl;
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    cout << "enter the weigth of item :" << endl;
    for(int i=1;i<=n;i++){
        cin >> w[i];
    }
    inatializationmemo(n,c);
    int ans=knapsack(c,n);
    printmemo(n,c);
    cout << "the maximum price is :" << ans << endl;
    printPTable(c,n);
    printItems(c,n);



}