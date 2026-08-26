#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v;
    v.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    int result = 0;
    bool flag = false;
 
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            flag = true;
        } else if (flag) {
            result++;
            flag = false;
        }
    }
    
    if (flag) {
        result++;
    }
 
    cout << min(result, 2) << endl;
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