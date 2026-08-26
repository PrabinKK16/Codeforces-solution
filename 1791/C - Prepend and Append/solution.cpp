#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int left = 0;
    int right = n - 1;
 
    while (left < right) {
        if (s[left] != s[right]) {
            left++;
            right--;
        } else {
            break;
        }
    }
 
    cout << right - left + 1 << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}