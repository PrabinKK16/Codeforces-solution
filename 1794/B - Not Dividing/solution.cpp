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
 
    if (v[0] == 1) {
        v[0] += 1;
    }
 
    for (int i = 1; i < n; i++) {
        if (v[i] == 1) {
            v[i] += 1;
        }
        if (v[i] % v[i - 1] == 0) {
            v[i] += 1;
        }
    }
 
    for (int i = 0; i < n; i++) {
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