#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int cnt = 0;
    int open = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == ')') {
            if (open > 0) open--;
            else cnt++;
        } else {
            open++;
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