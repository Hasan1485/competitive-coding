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
    string k = "(";
    k += s + ")";
    vector<string> d;
    for (int i = 0; i < k.length(); i++) {
        if (k[i] == '(') {
            d.push_back("(");
        }
        else {
            if (d.size() != 0) {
                d.pop_back();
            }
            else {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << (d.empty() ? "Yes" : "No") << endl;
}
signed main() {
    solve();
    return 0;
}