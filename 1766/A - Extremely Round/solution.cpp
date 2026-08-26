#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    int result = 0;
 
    if (n < 10) {
        cout << n << endl;
    } else {
        int val = 10;
        while (n >= val) {
            result += 9;
            val = val * 10;
        }
        val /= 10;
        result += n / val;
        cout << result << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}