#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1);
        vector<pair<int, int>> v;
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            v.push_back({a[i], i});
        }
 
        sort(v.begin(), v.end(), greater<pair<int, int>>());
 
        vector<int> ans(n + 1);
        ans[0] = 0;
 
        long long total = 0;
 
        int pos = 1;
 
        for (int i = 0; i < n; i++) {
            int visits = v[i].first;
            int idx = v[i].second;
 
            if (i % 2 == 0) {
                ans[idx] = pos;
            } else {
                ans[idx] = -pos;
                pos++;
            }
 
            total += 2LL * visits * abs(ans[idx]);
        }
 
        cout << total << '
';
 
        for (int i = 0; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << '
';
    }
 
    return 0;
}