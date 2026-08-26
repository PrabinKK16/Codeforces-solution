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
 
    int result = (v[n - 1] - v[0]);
 
    for (int i = 1; i < n; i++) {
        result = max(result, (v[i] - v[0]));
    }
 
    for (int i = 0; i < n - 1; i++) {
        result = max(result, (v[n - 1] - v[i]));
    }
 
    for (int i = 1; i < n; i++) {
        result = max(result, (v[i - 1] - v[i]));
    }
 
    cout << result << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--){
        solve();
    }
 
    return 0;
}