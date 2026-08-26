#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    if (!is_sorted(v.begin(), v.end())) {
        cout << 0 << endl;
        return;
    }
 
    int res = INT_MAX;
 
    for (int i = 1; i < n; i++) {
        int val = (v[i] - v[i - 1] + 2) / 2;
        res = min(res, val);
    }
 
    cout << res << endl;
    return;
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