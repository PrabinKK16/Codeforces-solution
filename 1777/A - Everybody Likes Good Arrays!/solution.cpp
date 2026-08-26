#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x % 2;
    }
 
    int result = 0;
    int cnt = 1;
 
    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            cnt++;
        } else {
            result += cnt - 1;
            cnt = 1;
        }
    }
 
    result += cnt - 1;
 
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