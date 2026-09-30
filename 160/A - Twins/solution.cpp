#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
 
    sort (arr.begin(), arr.end(), greater<int>());
    sum /= 2;
 
    int amount = 0;
 
    for (int i = 0; i < n; i++) {
        amount += arr[i];
 
        if (amount > sum) {
            cout << i + 1 << endl;
            return;
        }
    }
 
    cout << n << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
 
    while (t--) {
        solve();
    }
 
    return 0;
}