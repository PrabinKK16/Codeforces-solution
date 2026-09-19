#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int zero = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) zero++;
    }
 
    if (zero <= 1) {
        cout << -1 << endl;
        return;
    }
 
    int sum = arr[0] + arr[n - 1];
 
    cout << min(sum, zero) << endl;
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