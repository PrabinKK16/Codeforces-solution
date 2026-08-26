#include<iostream>
#include<string>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    int n = s.length();
 
    int ab = 0;
    int ba = 0;
 
    for (int i = 1; i < n; i++) {
        string t;
        t.push_back(s[i - 1]);
        t.push_back(s[i]);
 
        if (t == "ab") ab++;
        else if (t == "ba") ba++;
    }
 
    if (ab > ba) {
        if (s[0] == 'a') s[0] = 'b';
        else s[0] = 'a';
    } else if (ba > ab) {
        if (s[0] == 'a') s[0] = 'b';
        else s[0] = 'a';
    }
 
    cout << s << endl;
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