#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int result = __gcd(arr[0], arr[n - 1]);
 
    if (n <= 2) {
        cout << result << '
';
        return;
    }
 
    for (int i = 1; i < n - 1; i++) {
        int val = __gcd(result, arr[i]);
        if (val >= result) {
            result = val;
        }
    }
 
    cout << result << '
';
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