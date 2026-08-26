#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    vector<long long> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort (v.begin(), v.end());
 
    long long maxi = 1;
    long long cnt = 1;
    long long last = v[0];
    long long result = 0;
 
    for (int i = 1; i < n; i++) {
        if (v[i] - last <= k) {
            cnt++;
        } else {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
        last = v[i];
    }
 
    maxi = max(maxi, cnt);
    result = n - maxi;
 
    cout << result << endl;
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