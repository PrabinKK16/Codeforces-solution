#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    unordered_map<int, int> freq;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }
 
    for (const auto& it : freq) {
        if (it.second >= 2) {
            cout << "Yes" << endl;
            return;
        }
    }
 
    cout << "No" << endl;
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