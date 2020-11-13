/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
bool ok(string s) {
    int o = 0, z = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') z++; 
        else o++;
    }
    return z != o;
}
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> ans;
    int pos = 0;
    for (int i = n; i >= 0; i--) {
        string str = s.substr(0, i);
        // cout << str << endl;
        if (ok(str)) {
            pos = i;
            ans.push_back(str);
            break;
        }
    }
    // cout << pos << endl;
    if (pos != n) ans.push_back(s.substr(pos));
    cout << ans.size() << endl;
    for (string i : ans) cout << i << " ";
}
signed main() {
    // OJ;
    solve();
    return 0;
}