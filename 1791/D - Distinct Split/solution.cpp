#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);
    int rightUnique = 0;
 
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int idx = ch - 'a';
        if (freq1[idx] == 0) rightUnique++;
        freq1[idx]++;
    }
    
    // cout << rightUnique << endl;
 
    int leftUnique = 0;
    int result = 0;
 
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int idx = ch - 'a';
        if (freq2[idx] == 0) leftUnique++;
        freq2[idx]++;
        freq1[idx]--;
        if (freq1[idx] == 0) rightUnique--;
        result = max(result, leftUnique + rightUnique);
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