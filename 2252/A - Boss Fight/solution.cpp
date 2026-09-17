#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    long long sum = 0;
    unordered_map<int, int> freq;
    int maxi = INT_MIN;
    int ele = -1;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        sum += arr[i];
        if (maxi < freq[arr[i]]) {
            maxi = freq[arr[i]];
            ele = arr[i];
        } 
    }
 
    int rem = n - maxi;
 
    if (maxi <= rem + 1) {
        cout << sum << endl;
        return;
    }
 
    int usefulCopies = rem + 2;
    sum -= 1LL * (maxi - usefulCopies) * ele;
 
    cout << sum << endl;
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