#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<array>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<cstring>
#include<sstream>
#include<algorithm>
#include<limits>
#include<climits>
#include<cctype>
#include<utility>
#include<functional>
#include<numeric>
#include<tuple>
#include<ctime>
#include<cassert>
#include<iterator>
#include<bitset>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<cmath>
using namespace std;
 
void solve() {
    string line;
    getline(cin, line);
 
    stringstream ss(line);
    string s, t;
    ss >> s >> t;
 
    map<char, vector<int>> mpp;
    vector<int> freq(26, 0);
 
    for (int i = s.length() - 1; i >= 0; i--) {
        mpp[s[i]].push_back(i);
    }
 
    for (int i = 0; i < t.length(); i++) {
        freq[t[i] - 'A']++;
    }
 
    for (auto it = mpp.begin(); it != mpp.end();) {
        char ch = it->first;
        int len = it->second.size();
 
        if (freq[ch - 'A'] == 0) {
            it = mpp.erase(it);
        } else {
            int n = len - freq[ch - 'A'];
 
            for (int i = 0; i < n; i++) {
                mpp[ch].pop_back();
            }
 
            it++;
        }
    }
 
    int last = -1;
 
    for (int i = 0; i < t.length(); i++) {
        char ch = t[i];
        if (mpp.find(ch) == mpp.end()) {
            cout << "NO" << endl;
            return;
        }
        int idx = mpp[ch].back();
 
        if (idx > last) {
            last = idx;
            mpp[ch].pop_back();
        } else {
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    cin.ignore();
 
    while (n--) {
        solve();
    }
 
    return 0;
}