#include<bits/stdc++.h>
using namespace std;
 
void add(vector<int>& arr, int num) {
    int n = arr.size();
    int i = n - 1;
 
    while (i >= 0 && num) {
        arr[i] = num % 2;
        num /= 2;
        i--;
    }
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr;
    arr.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int result = arr[0];
    
    for (int i = 0; i < n; i++) {
        result = arr[i] & result;
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