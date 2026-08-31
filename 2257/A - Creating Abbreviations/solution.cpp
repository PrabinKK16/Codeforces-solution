#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    unordered_set<char> st;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        st.insert(s[0] - 'a' + 'A');
    }
 
    bool ok = true;
 
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
 
        for (char ch : s) {
            if (st.find(ch) == st.end()) {
                ok = false;
            }
        }
    }
 
    cout << (ok ? "YES" : "NO") << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}