#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
void checkPalindrome(int num){
    if(num == reverseNumber(num)){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;
    checkPalindrome(num);
    return 0;
}