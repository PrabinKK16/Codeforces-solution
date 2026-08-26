#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long n;
    cin >> n;
 
    unsigned long long cnt = 0;
 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
        else {
            break;
        }
    }
    
    cout << cnt << endl;
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}