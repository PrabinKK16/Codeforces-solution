#include<iostream>
#include<vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a;
    a.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int result = 0;
 
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= a[i + 1]) {
            if (a[i + 1] == 0) {
                cout << -1 << endl;
                return;
            } else {
                while (a[i] >= a[i + 1]) {
                    result++;
                    a[i] /= 2;
                }
            }
        }
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