#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    int cnt = 0;
 
    while (n >= 2) {
        if (n % 6 == 0) {
            cnt += 1;
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
            n /= 6;
            cnt += 2;
        } else {
            break;
        }
    }
 
    if (n == 1) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}