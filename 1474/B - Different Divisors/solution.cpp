#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n < 2) return false;
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
 
    return true;
}
 
int nextPrime(int n) {
    while (!isPrime(n))
        n++;
 
    return n;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int d;
        cin >> d;
 
        int p = nextPrime(1 + d);
        int q = nextPrime(p + d);
 
        cout << 1LL * p * q << '
';
    }
 
    return 0;
}