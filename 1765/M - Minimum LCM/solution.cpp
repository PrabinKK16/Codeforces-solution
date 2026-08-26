#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    long long val = 1;
 
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            val = n / i;
            break;
        }
    }
 
    cout << val << " " << n - val << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}