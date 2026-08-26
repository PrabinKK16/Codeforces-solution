#include<iostream>
#include<vector>
using namespace std;
 
void solve() {
    long long x, n;
    cin >> x >> n;
 
    int val = n % 4;
 
    if (x % 2 == 0) {
        if (val == 0) {
            cout << x << endl;
            return;
        } else if (val == 1) {
            cout << x - n << endl;
            return;
        } else if (val == 2) {
            cout << x + 1 << endl;
            return;
        } else {
            cout << x + n + 1 << endl;
            return;
        }
    } else {
        if (val == 0) {
            cout << x << endl;
            return;
        } else if (val == 1) {
            cout << x + n << endl;
            return;
        } else if (val == 2) {
            cout << x - 1 << endl;
            return;
        } else {
            cout << x - n - 1 << endl;
            return;
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