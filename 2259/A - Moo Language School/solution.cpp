#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int sum = 0;
    int result = 0;
    int left = 0;
    int right = 0;
 
    while (right < n) {
        sum += s[right] - '0';
 
        if (right - left + 1 == k) {
            result += sum == k;
            sum = 0;
            left = right + 1;
        }
 
        right++;
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