#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<array>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<stack>
#include<queue>
#include<deque>
#include<tuple>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<cmath>
#include<limits>
#include<climits>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<ctime>
#include<cassert>
#include<functional>
#include<utility>
#include<numeric>
#include<utility>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    unsigned long long one = 0;
    unsigned long long zero = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) zero++;
        else if (arr[i] == 1) one++;
    }
 
    unsigned long long result = one * pow(2, zero);
    cout << result << '
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