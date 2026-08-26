#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, x;
    cin >> n >> x;
 
    vector<long long> arr(n);
    long long sum = 0;
    long long maxi = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (sum % x != 0) {
            maxi += (sum + x - 1) / x;
            sum = 0;
        }
    }
    
    if (sum > 0) {
        maxi += (sum + x - 1) / x;
    }
 
    long long mini = (std::accumulate(arr.begin(), arr.end(), 0LL) + x - 1) / x;
 
    cout << mini << " " << maxi << endl;
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