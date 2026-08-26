#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int cnt = 0;
 
    // First window
    for (int i = 0; i < k; i++) {
        if (s[i] == 'B')
            cnt++;
    }
 
    int ans = k - cnt;
 
    // Slide the window
    for (int i = k; i < n; i++) {
        if (s[i] == 'B')
            cnt++;
 
        if (s[i - k] == 'B')
            cnt--;
 
        ans = min(ans, k - cnt);
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
}