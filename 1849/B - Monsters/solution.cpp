#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long k;
    cin >> n >> k;
 
    auto cmp = [](const pair<long long, int>& a,
                  const pair<long long, int>& b) {
        if (a.first != b.first)
            return a.first < b.first;   
 
        return a.second > b.second;    
    };
 
    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        decltype(cmp)
    > pq(cmp);
 
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
 
        x %= k;
 
        if (x == 0)
            x = k;
 
        pq.push({x, i});
    }
 
    while (!pq.empty()) {
        cout << pq.top().second << " ";
        pq.pop();
    }
 
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}