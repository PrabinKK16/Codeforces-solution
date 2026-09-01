#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int cnt = 0;
 
    stack<char> st;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == ')') {
            if (!st.empty() && st.top() == '(') st.pop();
            else cnt++;
        } else {
            st.push(s[i]);
        }
    }
 
    cout << cnt << endl;
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