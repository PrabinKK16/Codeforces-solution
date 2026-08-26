#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, d;
    cin >> n >> d;
 
    vector<long long> arr(n);
 
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    sort (arr.begin(), arr.end(), greater<int> ());
    int ans = 0;
    int num = n;
 
    for (int i = 0; i < n; i++) {
        long long val = (d + arr[i]) / arr[i];
        if (num >= val) {
            ans++;
            num -= val;
        } else {
            break;
        }
    }
 
    cout << ans << endl;
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