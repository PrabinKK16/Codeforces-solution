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
 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int gcd = __gcd(v[i], v[j]);
            if (gcd <= 2) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
 
    cout << "No" << endl;
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