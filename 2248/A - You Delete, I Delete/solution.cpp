#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int n = s.length();
 
    bool one  = false;
    bool zero = false;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '1' && one == false) one = true;
        else if (s[i] == '0' && zero == false) zero = true;
        else cout << s[i];
    }
 
    cout << endl;
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