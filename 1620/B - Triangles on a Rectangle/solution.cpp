#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long w, h;
        cin >> w >> h;
 
        long long ans = 0;
 
        // Bottom side
        int k;
        cin >> k;
 
        long long first, last;
        cin >> first;
 
        for (int i = 1; i < k; i++) {
            cin >> last;
        }
 
        ans = max(ans, (last - first) * h);
 
        // Top side
        cin >> k;
 
        cin >> first;
 
        for (int i = 1; i < k; i++) {
            cin >> last;
        }
 
        ans = max(ans, (last - first) * h);
 
        // Left side
        cin >> k;
 
        cin >> first;
 
        for (int i = 1; i < k; i++) {
            cin >> last;
        }
 
        ans = max(ans, (last - first) * w);
 
        // Right side
        cin >> k;
 
        cin >> first;
 
        for (int i = 1; i < k; i++) {
            cin >> last;
        }
 
        ans = max(ans, (last - first) * w);
 
        cout << ans << '
';
    }
 
    return 0;
}