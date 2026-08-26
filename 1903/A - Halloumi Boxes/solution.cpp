#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) cin >> v[i];
 
    if (is_sorted(v.begin(), v.end()) || k >= 2) {
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