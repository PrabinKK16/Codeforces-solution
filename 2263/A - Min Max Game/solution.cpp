#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int one = 0;
    int zero = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (x == 1) one++;
        else zero++;
    }
 
    if (one >= zero) {
        cout << "Bessie" << endl;
    } else {
        cout << "Elsie" << endl;
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
 
// 2263/A