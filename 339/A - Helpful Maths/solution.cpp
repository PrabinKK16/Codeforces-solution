#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    string t = "";
    vector<int> v;
 
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            v.push_back(s[i] - '0');
        }
    }
 
    sort (v.begin(), v.end());
 
    for (int i = 0; i < v.size(); i++) {
        t.push_back(v[i] + '0');
        t.push_back('+');
    }
 
    t.pop_back();
 
    cout << t << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
 
    while (t--) {
        solve();
    }
    
    return 0;
}