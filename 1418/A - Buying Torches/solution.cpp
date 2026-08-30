#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long x, y, k;
    cin >> x >> y >> k;
 
    unsigned long long ans =
        (y * k + k - x + (x - 2)) / (x - 1) + k + 1;
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}