#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x, y;
    cin >> x >> y;
 
    if (x >= y && x % y == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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