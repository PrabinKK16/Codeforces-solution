#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    string x;
    cin >> x;
 
    string s;
    cin >> s;
 
    int cnt = 0;
 
    if (x.find(s) != string::npos) {
        cout << 0 << endl;
        return;
    }
 
    while (x.length() < s.length()) {
        cnt++;
        x = x + x;
    }
 
    if (x.find(s) != string::npos) {
        cout << cnt << endl;
        return;
    }
 
    x = x + x;
    cnt++;
    if (x.find(s) != string:: npos) {
        cout << cnt << endl;
        return;
    }
 
    cout << -1 << endl;
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