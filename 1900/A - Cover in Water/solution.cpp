#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int result = 0;
    int cnt = 0;
 
    for (const auto& ch : s) {
        if (ch == '.') cnt++;
        else {
            if (cnt >= 3) {
            cout << 2 << endl;
            return;
        } else {
                result += cnt;
                cnt = 0;
            }
        }
    }
 
    if (cnt >= 3) {
        cout << 2 << endl;
        return;
    } else {
        result += cnt;
        cnt = 0;
    }
 
    cout << result << endl;
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