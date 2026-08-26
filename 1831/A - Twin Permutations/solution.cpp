#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    int maxi = INT_MIN;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
 
    for (int i = 0; i < n; i++) {
        cout << maxi - v[i] + 1 << " ";
    }
 
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