#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
 
    if (x != 1) {
        cout << "Yes" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
    } else {
        if (k == 1) {
            cout << "No" << endl;
            return;
        }
        if (n % 2 == 0) {
            cout << "Yes" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout << endl;
        } else if ((n - 3) % 2 == 0 && k >= 3) {
            cout << "Yes" << endl;
            cout << (n - 3) / 2 + 1 << endl;
            for (int i = 0; i < (n - 3) / 2; i++) {
                cout << 2 << " ";
            }
            cout << 3 << endl;
        } else {
            cout << "No" << endl;
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