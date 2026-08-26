#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) cin >> v[i];
 
    sort (v.begin(), v.end());
 
    vector<int> b;
    vector<int> c;
 
    b.push_back(v[0]);
 
    for (int i = 1; i < n; i++) {
        if (v[i] == b[0]) b.push_back(v[i]);
        else c.push_back(v[i]);
    }
 
    if (b.empty() || c.empty()) {
        cout << -1 << endl;
        return;
    }
 
    cout << b.size() << " " << c.size() << endl;
 
    for (const auto& it : b) cout << it << " ";
    cout << endl;
 
    for (const auto& it : c) cout << it << " ";
    cout << endl;
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