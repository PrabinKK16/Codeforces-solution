#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) cin >> v[i];
 
    int result = v[0];
 
    for (int i = 1; i < n; i++) {
        result = max(result, v[i] - v[i - 1]);
    }
 
    result = max(result, 2 * (x - v[n - 1]));
 
    cout << result << endl;
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