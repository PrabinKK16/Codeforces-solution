#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    long long mini = 0;
    long long maxi = LLONG_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i & 1) {
            mini = max(mini, (long long)arr[i]);
        } else {
            maxi = min(maxi, (long long)arr[i]);
        }
    }
 
    if (n % 2 == 0 && maxi - mini >= 2) {
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
 
/* 2250/A */