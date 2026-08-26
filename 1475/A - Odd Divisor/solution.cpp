#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long n;
    cin >> n;
 
    if ((n & (n - 1)) == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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