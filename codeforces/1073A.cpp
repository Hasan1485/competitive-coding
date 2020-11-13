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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1) {
        cout << "No" << endl;
        return;
    }
    for (int i= 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            cout << "Yes" << endl;
            cout << s[i] << s[i + 1] << endl;
            return;
        }
        else if(i == n - 2) {
            cout << "No" << endl;
            return;
        }
    }
}
signed main() {
    solve();
    return 0;
}