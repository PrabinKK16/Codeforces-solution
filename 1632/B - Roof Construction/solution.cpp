#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> res;
 
    long long num = 1;
    while (num * 2 <= (n - 1)) {
        num *= 2;
    }
 
    for (long long i = num - 1; i >= 0; i--) {
        res.push_back(i);
    }
 
    for (long long i = num; i < n; i++) {
        res.push_back(i);
    }
 
    for (long long i = 0; i < res.size(); i++) {
        cout << res[i] << ' ';
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