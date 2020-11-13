/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); 
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
vector<string> group(string s) {
    vector<string> ss;
    for (int i = 0; i < s.length(); ++i) {
        string str = "";
        int j = i;
        while (s[j] == s[i] && j < s.length()) {
            ++j;
            str.push_back(s[i]);
        }
        i = j - 1;
        ss.push_back(str);
    }
    return ss;
}
void solve() {
    string s, t;
    cin >> s >> t;
    vector<string> ss = group(s), tt = group(t);
    if (ss.size() != tt.size()) {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < ss.size(); ++i) {
        if (ss[i][0] != tt[i][0] || ss[i].size() > tt[i].size()) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
signed main() {
    OJ;
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}