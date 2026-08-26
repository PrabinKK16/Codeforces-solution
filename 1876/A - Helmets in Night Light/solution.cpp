#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, p;
    cin >> n >> p;
 
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int, int>> arr;
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    for (int i = 0; i < n; i++) arr.push_back(make_pair(a[i], b[i]));
 
    sort (arr.begin(), arr.end(), [&](auto& a, auto& b) {
        if (a.second == b.second) return a.first > b.first;
        return a.second < b.second;
    });
 
    long long cost = 0;
    int rem = n - 1;
 
    for (int i = 0; i < n; i++) {
        if (arr[i].second >= p) {
            cost += 1LL * rem * p;
            break;
        }
 
        if (arr[i].first <= rem) {
            cost += 1LL * arr[i].second * arr[i].first;
            rem -= arr[i].first;
        } else {
            cost += 1LL * rem * arr[i].second;
            break;
        }
    }
 
    cout << cost + p << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}