#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long a, b;
    cin >> a >> b;
 
    unsigned long long cnt = 0;
 
    while (a != b) {
        if (a > b) {
            if (a % 8 == 0 && a / 8 >= b) {
                cnt++;
                a /= 8;
            } else if (a % 4 == 0 && a / 4 >= b) {
                cnt++;
                a /= 4;
            } else if (a % 2 == 0 && a / 2 >= b) {
                cnt++;
                a /= 2;
            } else {
                cout << -1 << endl;
                return;
            }
        } else {
            if (a * 8 <= b) {
                cnt++;
                a *= 8;
            } else if (a * 4 <= b) {
                cnt++;
                a *= 4;
            } else if (a * 2 <= b) {
                cnt++;
                a *= 2;
            } else {
                cout << -1 << endl;
                return;
            }
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