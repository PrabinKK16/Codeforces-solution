#include <bits/stdc++.h>
using namespace std;
 
bool helper(unsigned long long n) {
    unsigned long long num = n;
 
    while (n) {
        int d = n % 10;
        n /= 10;
        if (d != 0 && num % d != 0) {
            return false;
        }
    }
 
    return true;
}
 
void solve() {
    unsigned long long n;
    cin >> n;
 
    while (true) {
        if (helper(n)) {
            cout << n << '
';
            break;
        }
        n++;
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