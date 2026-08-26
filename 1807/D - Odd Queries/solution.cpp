#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, q;
    cin >> n >> q;
 
    vector<long long> v;
    v.resize(n);
    vector<long long> prefix(n, 0);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) prefix[0] = v[0];
        else prefix[i] = prefix[i - 1] + v[i];
    }
 
    while(q--) {
        long long l, r, k;
        cin >> l >> r >> k;
 
        l -= 1;
        r -= 1;
 
        long long prevSum = 0;
 
        if (l == 0) prevSum = prefix[r];
        else prevSum = prefix[r] - prefix[l - 1];
 
        long long newSum = 1LL * (r - l + 1) * k;
        long long diff = newSum - prevSum;
 
        long long sum = prefix[n - 1] + diff;
 
        if (sum % 2 == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
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