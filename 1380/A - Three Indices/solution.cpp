#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> p(n);
 
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    // pref[i] = index of the minimum element from [0 ... i]
    vector<int> pref(n);
    pref[0] = 0;
 
    for (int i = 1; i < n; i++) {
        if (p[i] < p[pref[i - 1]])
            pref[i] = i;
        else
            pref[i] = pref[i - 1];
    }
 
    // suffix minimum index
    int suffixMinIdx = n - 1;
 
    // j must have something on both sides
    for (int j = n - 2; j >= 1; j--) {
 
        int i = pref[j - 1];
        int k = suffixMinIdx;
 
        if (p[i] < p[j] && p[k] < p[j]) {
            cout << "YES
";
            cout << i + 1 << " " << j + 1 << " " << k + 1 << '
';
            return;
        }
 
        // Include p[j] in the suffix for the next iteration
        if (p[j] < p[suffixMinIdx]) {
            suffixMinIdx = j;
        }
    }
 
    cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        solve();
    }
 
    return 0;
}