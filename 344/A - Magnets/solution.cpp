#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int last = -1;
    int cnt = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if (x != last) {
            cnt++;
            last = x;
        }
    }
 
    cout << cnt << endl;
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