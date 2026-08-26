#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    int neg = 0;
    int pos = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == -1) neg++;
        else pos++;
    }
 
    int res = 0;
    int cnt = 0;
 
    if (neg > pos) cnt = (neg - pos + 1) / 2;
 
    neg -= cnt;
    pos += cnt;
 
    if (neg & 1) cnt++;
 
    cout << cnt << endl;
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