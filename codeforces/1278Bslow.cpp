/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void solve() {
    string s,h;
    cin >> s >> h;
    sort(s.begin(),s.end());
    for (int i = 0; i < h.length(); i++) {
        for (int len = 1; len <= h.length() - i; len++) {
            string check = h.substr(i, len);
            sort(check.begin(),check.end());
            if (check == s) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}