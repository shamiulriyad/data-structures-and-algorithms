#include<bits/stdc++.h>

using namespace std;


int p[100];
//int price[100];

int memo[100];
int ptable[50];
void intiazationmemo(int l){
    memo[0]=0;
    for(int i=0;i<=l;i++){
        memo[i]=-1;
    }
}


void printmemo(int l){
    cout << "***************************memo*************************"<< endl;
    for(int i=0;i<=l;i++){
        cout << memo[i] << " ";
    }
    cout << "\n*********************memo*****************" << endl;
}

void print_ptable(int l){
    cout << "************************" << endl;
    for(int i=0;i<=l;i++){
        cout<< ptable[i] << " ";
    }
    cout << "\n*****************************" << endl;
}

void bottomup(int l){


for(int i = 1; i <= l; i++){         // i = current rod length
    for(int j = 1; j <= i; j++){     // j = first cut length
        if(p[j] + memo[i-j] > memo[i]){
            memo[i] = p[j] + memo[i-j];  // max revenue
            ptable[i] = j;                // best cut
        }
    }
}
}



void printcuts(int l){
    if(l==0) return;
    cout << ptable[l] << "m was taken" << endl;
    printcuts(l-ptable[l]);
}



int rodcutting(int l){
    if(l==0){
        return 0;
    }
    if(memo[l]!=-1){
        return memo[l];
    }
    int maxvalue=INT_MIN;
  int maxlength;
    for(int i=1;i<=l;i++){
        int value=p[i]+rodcutting(l-i);
        if(value>maxvalue){
            maxvalue=value;
          maxlength=i;
        }
    }
    ptable[l]=maxlength;
    memo[l]=maxvalue;
    return maxvalue;
}


int main(){
    int l;
    cin >> l;
    for(int i=1;i<=l;i++){
        cin >> p[i];
    }
    
   
   intiazationmemo(l);
    int result = rodcutting(l);

    cout << "Max Revenue: " << result << endl;
    printmemo(l);
    print_ptable(l);
    cout << "Cuts taken:" << endl;
    printcuts(l);

}