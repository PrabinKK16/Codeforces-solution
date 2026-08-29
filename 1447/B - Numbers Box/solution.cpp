#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> matrix(n, vector<int> (m));
    int sum = 0;
    int mini = INT_MAX;
    int cnt = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] <= 0) cnt++;
            sum += abs(matrix[i][j]);
            if (abs(matrix[i][j]) < mini) {
                mini = abs(matrix[i][j]);
            }
        }
    }
 
    if (cnt % 2 == 0) {
        cout << sum << '
';
        return;
    }
 
    cout << sum - 2 * mini << '
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