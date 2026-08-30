#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n);
    vector<int> b(m);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
 
    int one = 0;
    int two = 0;
 
    for (int i = 0; i < n - 1; i++) {
        one += a[i] - a[i + 1] + 1;
    }
 
    one += a[n - 1];
 
    for (int i = 0; i < m - 1; i++) {
        two += b[i] - b[i + 1] + 1;
    }
 
    two += b[m - 1];
 
    if (one >= two) {
        cout << 1 << '
';
    } else {
        cout << 2 << '
';
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