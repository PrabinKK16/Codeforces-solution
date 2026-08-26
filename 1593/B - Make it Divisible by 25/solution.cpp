#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    unsigned long long n;
    cin >> n;
 
    string s = to_string(n);
    vector<int> last(10, -1);
    int prev = -1;
    int result = s.length();
    int m = s.length();
 
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '0') {
            int mini = -1;
            
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == '5' || s[j] == '0') {
                    mini = j;
                    break;
                }
            }
            
            if (mini == -1) {
                continue;
            } else {
                result = min(result, m - mini - 2);
            }
        } else if (s[i] == '5') {
            int mini = -1;
            
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == '2' || s[j] == '7') {
                    mini = j;
                    break;
                }
            }
            
            if (mini == -1) {
                continue;
            } else {
                result = min(result, m - mini - 2);
            }
        }
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