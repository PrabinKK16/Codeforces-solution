#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a >> b;
 
    long long n = abs(a - b);
    if (n == 0) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    long long mini = min(a, b);
    long long rem = mini / n;
 
    long long m = min(mini - rem * n, (rem + 1) * n - mini);
 
    cout << n << " " << m << endl;
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