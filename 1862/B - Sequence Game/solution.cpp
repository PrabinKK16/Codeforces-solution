#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    vector<int> result;
    result.push_back(v[0]);
 
    for (int i = 1; i < n; i++) {
        if (v[i - 1] == 1) result.push_back(v[i]);
        else {
            result.push_back(1);
            result.push_back(v[i]);
        }
    }
 
    cout << result.size() << endl;
    
    for (const auto& r : result) cout << r << " ";
    cout << endl;
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