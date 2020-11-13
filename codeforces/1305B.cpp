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
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    vector<int> le, ri;
    while (l < r) {
        while (l < s.size() && s[l] == ')') {
            l++;
        }
        while (r >= 0 && s[r] == '(') {
            r--;
        }
        if (l < s.length() && r >= 0 && l < r) {
            le.push_back(l + 1);
            ri.push_back(r + 1);
            l++;
            r--;
        }
    }
    if (le.empty()) {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << 2 * le.size() << endl;
    for (auto i : le) {
        cout << i << " ";
    }
    reverse(ri.begin(), ri.end());
    for (auto i : ri) {
        cout << i << " ";
    }
    cout << endl;
}
signed main() {
    solve();
    return 0;
}