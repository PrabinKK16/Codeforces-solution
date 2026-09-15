#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    if (a == b || b == c || a == c) {
        cout << 0 << endl;
        return;
    }
 
    int cnt = 0;
 
    while (a != b && b != c && a != c) {
        int mini = min({a, b, c});
        int maxi = max({a, b, c});
 
        if (mini == a) {
            if (maxi == b) {
                b -= 1;
            } else if (maxi == c) {
                c -= 1;
            }
 
            a += 1;
        } else if (mini == b) {
            if (maxi == a) {
                a -= 1;
            } else if (maxi == c) {
                c -= 1;
            }
 
            b += 1;
        } else {
            if (maxi == b) {
                b -= 1;
            } else if (maxi == a) {
                a -= 1;
            }
 
            c += 1;
        }
 
        cnt++;
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