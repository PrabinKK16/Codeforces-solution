#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
 
    vector<long long> v;
    v.resize(n);
    long long result = b - 1;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    for (int i = 0; i < n - 1; i++) {
        if (v[i] < a) {
            result += v[i];
        } else {
            result += a - 1;
        }
    }
 
    if (v[n - 1] < a) {
            result += v[n - 1] + 1;
        } else {
            result += a;
        }
 
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