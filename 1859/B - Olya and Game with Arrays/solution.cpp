#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> arr(n, LLONG_MAX);
    long long minimum = LLONG_MAX;  
 
    for (int k = 0; k < n; k++) {
        int m;
        cin >> m;
        vector<long long> v(m);
        long long mini = LLONG_MAX;
 
        for (int i = 0; i < m; i++) {
            cin >> v[i];
            minimum = min(minimum, v[i]);
            if (mini > v[i]) {
                arr[k] = mini;
                mini = v[i];
            } else if (arr[k] > v[i]) {
                arr[k] = v[i];
            }
        }
    }
 
    long long result = LLONG_MIN;
    long long sum = accumulate(arr.begin(), arr.end(), 0LL);
 
    for (int i = 0; i < n; i++) {
        long long value = sum - arr[i] + minimum;
        result = max(result, value);
    }
 
    cout << result << endl;
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