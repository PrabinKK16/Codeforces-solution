#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
    int val = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        val ^= v[i];
    }
 
    if (n & 1) {
        cout << val << endl;
        return;
    } else {
        if (val == 0) {
            cout << val << endl;
        } else {
            cout << -1 << endl;
        }
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