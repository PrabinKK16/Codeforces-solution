#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    long long result = LLONG_MAX;
 
    for (int i = 0; i <= 30; i++) {
        long long newb = b + i;
        long long cnt = i;
 
        if (newb == 1) {
            continue;
        }
 
        long long x = a;
 
        while (x > 0) {
            x /= newb;
            cnt++;
        }
 
        result = min(result, cnt);
    }
 
    cout << result << endl;
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