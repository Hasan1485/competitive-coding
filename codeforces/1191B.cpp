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
bool check(string s, string s1, string s2) {
    vector<string> v(3);
    v[0] = s, v[1] = s1, v[2] = s2;
    sort(v.begin(), v.end());
    if (v[0] == v[1] && v[0] == v[2]) {
        return true;
    }
    if (v[0][1] == v[1][1] && v[2][1] == v[0][1]) {
        if (v[0][0] == v[1][0] - 1 && v[1][0] == v[2][0] - 1) {
            return true;
        }
    }
    return false;
}
void solve() {
    string s, s1, s2;
    cin >> s >> s1 >> s2;
    if (check(s, s1, s2)) {
        cout << 0 << endl;
        return;
    }
    vector<string> all;
    for (int i = 1; i <= 9; ++i) {
        string s = "";
        s += (char)(i + '0');
        all.push_back(s + "m");
        all.push_back(s + "p");
        all.push_back(s + "s");
    }
    for (auto i : all) {
        if (check(i, s, s1)) { cout << 1 << endl; return; }
        if (check(i, s, s2)) { cout << 1 << endl; return; }
        if (check(i, s1, s2)) { cout << 1 << endl; return; }
    }
    cout << 2 << endl;
}
signed main() {
    // OJ;
    solve();
    return 0;
}