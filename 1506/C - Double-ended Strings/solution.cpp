#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string a, b;
    cin >> a >> b;
 
    int n = a.size();
    int m = b.size();
 
    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
    int len = 0;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                len = max(len, dp[i][j]); 
            } else {
                dp[i][j] = 0;
            }
        }
    }
 
    cout << n + m - 2 * len << '
';
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