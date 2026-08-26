#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
 
    unsigned long long mini = (k * (k + 1)) / 2;
    unsigned long long maxi = (k * (2 * n - k + 1)) / 2;
 
    if (x >= mini && x <= maxi) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
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