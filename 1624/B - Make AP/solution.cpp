#include<iostream>
using namespace std;
 
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
 
    long long new_a = 2 * b - c;
    long long new_b = (a + c) / 2;
    long long new_c = 2 * b - a;
 
    if (a != 0 && new_a > 0 && new_a % a == 0) {
        cout << "Yes" << endl;
        return;
    }
 
    if (b != 0 && (a + c) % 2 == 0 && new_b > 0 && new_b % b == 0) {
        cout << "Yes" << endl;
        return;
    }
 
    if (c != 0 && new_c > 0 && new_c % c == 0) {
        cout << "Yes" << endl;
        return;
    }
 
    cout << "No" << endl;
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