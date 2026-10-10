#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    if (s[0] >= 'A' && s[0] <= 'Z') {
        cout << s << endl;
    } else {
        s[0] = (s[0] - 'a' + 'A');
        cout << s << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    
    while (t--) {
        solve();
    }
 
    return 0;
}