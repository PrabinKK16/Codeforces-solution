#include<bits/stdc++.h> 
using namespace std;
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    if (a > b) {
        cout << "First" << endl;
    } else if (b > a) {
        cout << "Second" << endl;
    } else {
        if (c % 2) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
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