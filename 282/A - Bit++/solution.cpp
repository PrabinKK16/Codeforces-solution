#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    
    int result = 0;
 
    while (t--) {
        string s;
        cin >> s;
 
        if (s[0] == '+' || s[2] == '+') result++;
        else result--;
    }
 
    cout << result << endl;
}