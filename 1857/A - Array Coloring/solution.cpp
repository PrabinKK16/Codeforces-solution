#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
 
    if (sum % 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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