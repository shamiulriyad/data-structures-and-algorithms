  /*
  ei tecnique ta kivabe use kora hoi. akta array diya thakbe tar index thakbe.. dore ni je amk e 10 length er akta array diya asse.
  amk jodi bole je tmi 5 thake 8 er moddhe er joikfol ber koro tahole amra first thake suru kore 5 porjonto ase tarpor abr 8 porjontao jai jokta kopre parbo but ei khetre amder time complty bere jabe . kintu amder utit time 
  complexty komato. dsei jonno amra prefix sum use korbo eita kivabe kaj kore akn dekhi.. amader array ar array+1 index er jpk kore store kore rakhbo. rhek oita minas korbo thole hoye jabe. akn dekhi tecniq ta kivabe kaj kore 
  akta array diya check kori.


    index:    0 1 2 3   4  5  6
    array:    2 3 4 1   4  5  6
    sum:      2 5 9 10 14 19 25

    akn amk e jodi bole je 3-5 er moddhe jok  fol ber korte

    jokfol hobe je : 59-16= 43 (this is my ans  )

    cholo code kori akn:::::::::::::::::::::::::::

  
  
  
  
  
  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> pre(n); // for sum array
    pre[0] = a[0];       // 0  index e asce 0 ei hobe tkn - hobe na
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + a[i];      // amara sum array paisi
    }

    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;  
        if(l == 0)
            cout << pre[r] << endl;
        else
            cout << pre[r] - pre[l-1] << endl;
    }
}
