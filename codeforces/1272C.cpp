/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> v(k);
    set<int> ss;
    for (int i = 0; i < k; i++) {
        cin >> v[i];
        ss.insert(v[i]);
    }
    for (int i = 0; i < n; i++) {
        if (ss.find(s[i]) !=  ss.end()) {
            s[i] = '1';
        }
        else {
            s[i] = '0';
        }
    }
    int l = 0, r = s.length();
    int ans = 0;
    while (l < r) {
        int cur = 0;
        if (s[l] == '1') {
            while (l < r && s[l] == '1') {
                ++cur;
                ++l;
            }
            ans += cur * (cur + 1) / 2;
        } 
        else {
            l++;
        }
    }
    cout << ans << endl;
}
signed main() {
    solve();
    return 0;
}