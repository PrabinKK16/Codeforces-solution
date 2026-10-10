#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, t;
    cin >> n >> t;
 
    string s;
    cin >> s;
 
    for (int second = 0; second < t; second++) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
 
    cout << s << endl;
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