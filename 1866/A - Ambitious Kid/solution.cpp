#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    int result = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        result = min(result, abs(v[i]));
    }
 
    cout << result << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
 
    while (t--) {
        solve();
    }
 
    return 0;
}