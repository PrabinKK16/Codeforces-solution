#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    int maxOne = 1;
    int maxTwo = 1;
 
    int cntOne = 1;
    int cntTwo = 1;
 
    vector<int> freq1(2 * n + 1, 0);
    vector<int> freq2(2 * n + 1, 0);
    freq1[a[0]] = 1;
    freq2[b[0]] = 1;
 
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cntOne++;
        }
        else cntOne = 1;
        maxOne = max(maxOne, cntOne);
        freq1[a[i]] = max(freq1[a[i]], cntOne);
    }
 
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            cntTwo++;
        }
        else cntTwo = 1;
        maxTwo = max(maxTwo, cntTwo);
        freq2[b[i]] = max(freq2[b[i]], cntTwo);
    }
 
    int result = 0;
 
    for (int i = 1; i <= 2 * n; i++) {
        result = max(result, freq1[i] + freq2[i]);
    }
 
    cout << result << endl;
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