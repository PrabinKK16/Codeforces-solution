#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
    unordered_map<int, int> freq;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
 
    if (freq.size() > 2) {
        cout << "No" << endl;
        return;
    }
    if (freq.size() == 1) {
        cout << "Yes" << endl;
        return;
    }
 
    int mini = INT_MAX;
    int maxi = INT_MIN;
 
    for (const auto& it : freq) {
        mini = min(mini, it.second);
        maxi = max(maxi, it.second);
    }
 
    if (maxi - mini <= 1) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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