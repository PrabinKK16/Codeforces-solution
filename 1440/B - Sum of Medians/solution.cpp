#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> arr;
 
    for (int i = 0; i < n * k; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
 
    long long sum = 0;
    int startIdx = n * k - n / 2 - 1;
    int diff = n / 2 + 1;
 
    for (int i = 0; i < k; i++) {
        sum += arr[startIdx];
        startIdx -= diff;
    }
 
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