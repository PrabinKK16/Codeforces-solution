#include<bits/stdc++.h>
using namespace std;
 
int helper(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    int val = helper(a - 1);
    int result = a;
 
    int rem = val ^ b;
 
    if (rem == a) result += 2;
    else if (val == b) result += 0;
    else result += 1;
 
    cout << result << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}