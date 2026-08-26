#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long n, k;
    cin >> n >> k;
 
    if (n % 2 == 0 || (n - k) % 2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}