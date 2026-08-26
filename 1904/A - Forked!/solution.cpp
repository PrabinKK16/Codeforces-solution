#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    int xk, yk;
    cin >> xk >> yk;
 
    int xq, yq;
    cin >> xq >> yq;
 
    set<pair<int, int>> st;
    int result = 0;
 
    int drow[8] = {a, a, -a, -a, b, b, -b, -b};
    int dcol[8] = {b, -b, b, -b, a, -a, a, -a};
 
    for (int i = 0; i < 8; i++) {
        st.insert(make_pair(xk + drow[i], yk + dcol[i]));
    }
 
    for (int i = 0; i < 8; i++) {
        if (st.find(make_pair(xq + drow[i], yq + dcol[i])) != st.end()) {
            result++;
        }
    }
 
    if (a == b) result /= 2;
 
    cout << result << endl;
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