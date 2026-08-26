#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    int cnt = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 2) cnt++;
    }
 
    if (cnt & 1) {
        cout << -1 << endl;
    } else {
        cnt /= 2;
 
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) cnt--;
            if (cnt == 0) {
                cout << i + 1 << endl;
                return;
            }
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}