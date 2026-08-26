#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, x;
    cin >> n >> x;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    long long mini = arr[0] - x;
    long long maxi = arr[0] + x;
    long long res = 0;
 
    for (int i = 1; i < n; i++) {
        long long minimum = arr[i] - x;
        long long maximum = arr[i] + x;
 
        if (minimum > maxi || maximum < mini) {
            mini = minimum;
            maxi = maximum;
            res++;
        } else {
            mini = max(mini, minimum);
            maxi = min(maxi, maximum);
        }
    }
 
    cout << res << endl;
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