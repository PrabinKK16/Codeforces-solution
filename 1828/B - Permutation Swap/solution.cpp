#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int result = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] - 1 == i) continue;
        result = __gcd(result, abs(arr[i] - i - 1));
    }
 
    cout << result << endl;
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