#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) cin >> v[i];
 
    if (v[0] == 1) {
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