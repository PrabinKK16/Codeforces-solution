#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    char ch;
    cin >> ch;
    string s;
    cin >> s;
 
    vector<int> arr;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'g') {
            arr.push_back(i);
            arr.push_back(i + n);
        }
    }
    
    sort (arr.begin(), arr.end());
 
    int ans = 0;
    if (ch == 'g') {
        cout << 0 << endl;
        return;
    }
 
    for (int i = 0; i < n; i++) {
        if (s[i] == ch) {
            int idx = lower_bound(arr.begin(), arr.end(), i) - arr.begin();
            ans = max(ans, arr[idx] - i);
        }
    }
 
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}