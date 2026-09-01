#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    long long maxi = max(a, max(b, c));
    long long mini = min(a, min(b, c));
    long long result = maxi - mini;
 
    if (a == maxi) {
        result = min(result, b + c - mini);
    } else if (b == maxi) {
        result = min(result, a + c - mini);
    } else {
        result = min(result, a + b - mini);
    }
 
    cout << result << '
';
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