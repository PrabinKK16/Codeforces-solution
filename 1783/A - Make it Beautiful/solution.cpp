#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort (v.begin(), v.end());
 
    if (v[0] == v[n - 1]) {
        cout << "No" << endl;
        return;
    }
 
    cout << "Yes" << endl;
    cout << v[n - 1] << " ";
 
    for (int i = 0; i < n - 1; i++) {
        cout << v[i] << " ";
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