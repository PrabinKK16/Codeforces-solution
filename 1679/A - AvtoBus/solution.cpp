#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void solve() {
    unsigned long long n;
    cin >> n;
 
    if (n % 2 == 1) {
        cout << -1 << endl;
        return;
    }
 
    unsigned long long mini = 0;
    unsigned long long maxi = 0;
 
    mini = n / 6;
 
    if (n % 6 == 4 || n % 6 == 2) {
        mini += 1;
    }
 
    maxi = n / 4;
 
    if (maxi == 0 || mini == 0) {
        cout << -1 << endl;
        return;
    }
 
    cout << mini << " " << maxi << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}