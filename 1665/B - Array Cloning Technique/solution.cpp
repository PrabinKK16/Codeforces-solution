#include <iostream>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <ctime>
#include <climits>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include <iterator>
#include <tuple>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <cstring>
#include <sstream>
#include <string>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <array>
#include <vector>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    sort(arr.begin(), arr.end());
 
    long long maxi = 1, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cnt++;
        }
        else
        {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
 
    long long elementSet = maxi;
    long long result = 0;
 
    if (maxi == n)
    {
        cout << 0 << "
";
        return;
    }
 
    while (true)
    {
        int rem = n - elementSet;
 
        if (rem > maxi)
        {
            result += maxi + 1;
            elementSet += maxi;
            maxi *= 2;
        }
        else
        {
            elementSet += rem;
            result += rem + 1;
            break;
        }
 
        if (elementSet == n)
            break;
    }
 
    cout << result << "
";
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}