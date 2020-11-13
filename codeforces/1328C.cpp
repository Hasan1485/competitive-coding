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
    string a, b;
    a.push_back('1');
    b.push_back('1');
    for (int i = 1; i < n; ++i) {
        if (s[i] == '1') {
            a.push_back('1');
            b.push_back('0');
            for (int j = i + 1; j < n; j++) {
                a.push_back('0');
                b.push_back(s[j]);
            }
            break;
        }
        else if (s[i] == '2'){
            a.push_back('1');
            b.push_back('1');
        }
        else {
            a.push_back('0');
            b.push_back('0');
        }
    }
    cout << a << endl;
    cout << b << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}