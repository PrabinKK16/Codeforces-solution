#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int cnt0 = 0;
    int cnt1 = 0;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }
 
    int cnt = min(cnt0, cnt1);
 
    if (cnt % 2 == 0) {
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }
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