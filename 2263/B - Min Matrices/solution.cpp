#include <bits/stdc++.h>
using namespace std;
 
void print(vector<vector<int>>& matrix) {
    int n = matrix.size();
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    if (n > k || k > (2 * n - 1)) {
        cout << -1 << endl;
        return;
    }
 
    vector<vector<int>> matrix(n, vector<int> (n, -1));
 
    int i = 0;
    int j = 0;
 
    int cnt = k - n + 1;
    int val = 1;
 
    while (cnt--) {
        matrix[0][j] = val;
        val++;
        j++;
    }
    
    for (i = 1; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = val;
                val++;
            }
        }
    }
 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = val;
                val++;
            }
        }
    }
 
    print(matrix);
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