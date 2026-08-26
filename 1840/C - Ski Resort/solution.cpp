#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, q;
    cin >> n >> k >> q;
 
    long long ans = 0;
    long long cnt = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if (x <= q) {
            cnt++;
        }
        else {
            if (cnt >= k) {
                long long len = cnt - k + 1;
                ans += len * (len + 1) / 2;
            }
 
            cnt = 0;
        }
    }
 
    if (cnt >= k) {
        long long len = cnt - k + 1;
        ans += len * (len + 1) / 2;
    }
 
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