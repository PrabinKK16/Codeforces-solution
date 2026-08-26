#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
 
    vector<int> ans(n);
 
    int i = 0;
 
    while (i < n) {
        int j = i;
 
        // Find the end of the equal-value group
        while (j < n && s[j] == s[i]) {
            j++;
        }
 
        // Only one element in this group
        if (j - i == 1) {
            cout << -1 << '
';
            return;
        }
 
        // Cyclically shift indices
        for (int k = i; k < j - 1; k++) {
            ans[k] = k + 2;       // 0-indexed k -> 1-indexed k+2
        }
 
        ans[j - 1] = i + 1;       // last -> first
 
        i = j;
    }
 
    for (int x : ans) {
        cout << x << ' ';
    }
 
    cout << '
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