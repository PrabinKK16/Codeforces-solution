#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int zero = 0;
    int one = 0;
    int n = s.length();
 
    for (const char ch : s) {
        if (ch == '0') zero++;
        else one++;
    }
    
    int i = 0;
 
    for (; i < s.length(); i++) {
        if (s[i] == '0') {
            if (one > 0) one--;
            else {
                cout << zero + one << endl;
                return;
            }
        }
        else {
            if (zero > 0) {
                zero--;
            } else {
                cout << zero + one << endl;
                return;
            }
        }
    }
    
    cout << 0 << endl;
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