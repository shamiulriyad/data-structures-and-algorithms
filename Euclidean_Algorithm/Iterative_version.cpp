#include<iostream>
using namespace std;
int gcd(int a, int b){
    while (b)
    {
        /* code */
        a= a%b;
        swap(a,b);
    }
    return a;
    
}


int main()
{
    int a, b;
    cin >> a >> b;
    int ans= gcd(a,b);
    cout << ans << endl;

}