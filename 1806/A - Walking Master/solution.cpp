#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (b > d) {
        cout << -1 << endl;
        return;
    }
 
    int cnt = d - b;
 
    a += cnt;
    if (c > a) {
        cout << -1 << endl;
        return;
    }
 
    cnt += a - c;
 
    cout << cnt << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}