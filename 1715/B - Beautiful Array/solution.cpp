#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long n, k, b, s;
    cin >> n >> k >> b >> s;
 
    if (k * b > s) {
        cout << -1 << endl;
        return;
    }
 
    vector<unsigned long long> arr(n, 0);
    unsigned long long firstVal = min(s, k * b + k - 1);
    arr[0] = firstVal;
    s -= firstVal;
 
    for (long long i = 1; i < n; i++) {
        unsigned long long val = min(s, k - 1);
        arr[i] = val;
        s -= val;
        if (s == 0) break;
    }
 
    if (s != 0) {
        cout << -1 << endl;
        return;
    }
 
    for (long long i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
 
    cout << endl;
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