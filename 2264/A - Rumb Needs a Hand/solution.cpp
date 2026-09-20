#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    vector<int> v;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if ((arr[i] - (i + 1)) != 0) v.push_back(arr[i]);
    }
 
    reverse(v.begin(), v.end());
 
    if (is_sorted(v.begin(), v.end())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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