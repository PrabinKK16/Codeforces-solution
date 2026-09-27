#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n;
	cin >> n;
 
	vector<int> arr(n);
	long long sum = 0;
 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
 
	sum = arr[0] - 1;
    int curr = 2;
 
	for (int i = 1; i < n; i++) {
		if (arr[i] >= curr) {
            sum += arr[i] - curr;
            curr++;
        } else {
            int need = curr - arr[i];
 
            if (need <= sum) {
                sum -= need;
                curr++;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
	}
 
	cout << "YES" << endl;
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