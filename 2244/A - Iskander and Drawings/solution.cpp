#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int cnt = 0;
    int res = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') cnt++;
        else cnt = 0;
        res = max(res, cnt);
    }
 
    cout << (res + 1) / 2 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}