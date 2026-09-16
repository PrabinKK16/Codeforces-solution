#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n < 2) return false;
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
 
    return true;
}
 
void solve() {
    int n;
    cin >> n;
 
    if (isPrime(n + 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}