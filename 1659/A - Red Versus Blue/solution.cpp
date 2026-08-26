#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, r, b;
    cin >> n >> r >> b;
 
    int size = r / (b + 1);
    int extra = r % (b + 1);
 
    string temp = string(size, 'R');
    string result = "";
 
    while (r > 0 && b > 0) {
        result += temp;
        r -= size;
        if (extra > 0) {
            result.push_back('R');
            extra--;
            r--;
        }
        result.push_back('B');
        b -= 1;
    }
 
    if (r > 0) {
        result += string(r, 'R');
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