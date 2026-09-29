#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int m;
    cin >> m;
 
    sort (arr.begin(), arr.end());
 
    while (m--) {
        int k;
        cin >> k;
 
        int result = 0;
 
        result = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
 
        cout << result << endl;
    }
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