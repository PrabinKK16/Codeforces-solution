#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int odd = 0;
    vector<int> freq(26, 0);
    int len = n - k;
 
    for (const auto& ch : s) {
        freq[ch - 'a']++;
    }
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) odd++;
    }
 
    if (k >= odd) {
        if (len % 2 == 1 && (k - odd) % 2 == 1) {
            cout << "Yes" << endl;
            return;
        }
        if (len % 2 == 0 && (k - odd) % 2 == 0) {
            cout << "Yes" << endl;
            return;
        }
    }
 
    if (odd >= k) {
        if (len % 2 == 1 && (odd - k) == 1) {
            cout << "Yes" << endl;
            return;
        }
        if (len % 2 == 0 && (odd - k) == 0) {
            cout << "Yes" << endl;
            return;
        }
    }
 
    cout << "No" << endl;
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