 //https://toph.co/p/n-th-prime

#include<bits/stdc++.h>
using namespace std;

vector<int> sieve_of_eratosthenes(int limit) {
    vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (sieve[i]) {
            for (int multiple = i * i; multiple <= limit; multiple += i) {
                sieve[multiple] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
        if (sieve[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    
    int upper_limit = 7400000;
    
    vector<int> primes = sieve_of_eratosthenes(upper_limit);
    
    cout << primes[n - 1] << endl;  
    
    return 0;
}
