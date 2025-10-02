#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MIN;
int coins[105];
int memo[105][105];
int choice[105][105];

void inatilaziaionmemo(int r, int c){
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            if(i==0 || j==0){
                memo[i][j]=0;

            }
            else{
                memo[i][j]=-1;
            }
        }
    }
}
  void printmemo(int m, int n){
    cout << "*******************************************************" << endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<< memo[i][j] << "\t" << endl;
        }
        cout << endl;
    }
    cout << "\n*****************************************************************";
  }


int coinchange(int m,int n){
    if(m==0){
        return 0;
    }
    if(n==0){
        return INF;
    }
    if(m<0){
        return INT_MIN;
    }
    int taken ;
    int nottaken;
    nottaken= 0+coinchange(m,n-1);
    if(coins[n]>m){
        memo[m][n]=coinchange(m,n-1);
    }
    else{
    taken= (coinchange(m-coins[n],n)==INF)?INF : 1+coinchange(m-coins[n],n);
        nottaken=coinchange(m,n-1);
        if(taken>=nottaken){
            memo[m][n]=take;
            coice[m][n]=n;
        }
        else{
            memo[m][n]=nottaken;
            coinchange[m][n]=n;
        }

    }
    return memo[m][n];
}


void bottomup(int m,int n){
    inatilaziaionmemo(m,n){

        for(int i=1;i<=m;i++){
            for(int j=0;j<=n;j++){
                coinchange(i,j);
            }
        }
    }
}







void printcoins(int m,int n){
    if(memo[i][j]<=0){
        cout << "payment not possibal" << endl;
        return;
    }
    cout <<"number of coins used to make the payment" << memo[m][n] << endl;
while(m>0 &&n>0){
    if(choice[m][n]==-1){
        n--;
    }
    else{
        int c=choice[m][n];
        cout << coins[c] << endl;
        m-coins[c];

    }
}

}

int main() {
    int bill, n;
    cout << "Enter the bill" << endl;
    cin >> bill;
    cout << "Enter the number of coins" << endl;
    cin >> n;

    cout << "Enter the coin values" << endl;
    for(int i=1; i<=n; i++) cin >> coins[i];

    bottomUp(bill, n);

    // optional: print memo table
    cout << "***************************memo*************************" << endl;
    for(int i=0; i<=bill; i++) {
        for(int j=0; j<=n; j++) cout << memo[i][j] << "\t";
        cout << endl;
    }

    printCoins(bill, n);

    return 0;
}
