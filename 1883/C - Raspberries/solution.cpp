#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    int even = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
    }
 
    int result = INT_MAX;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k == 0)
        {
            cout << 0 << endl;
            return;
        }
        int num = (arr[i] + k - 1) / k * k;
        result = min(result, num - arr[i]);
    }
 
    if (k == 2)
    {
        cout << min(result, 1) << endl;
        return;
    }
    else if (k == 4)
    {
        if (even >= 2)
        {
            cout << 0 << endl;
        }
        else if (even == 1)
        {
            cout << min(result, 1) << endl;
        }
        else
        {
            cout << min(result, 2) << endl;
        }
        return;
    }
 
    cout << result << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}