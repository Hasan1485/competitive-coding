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
bool isVowel(char a) {
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}
void solve() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i]) != isVowel(t[i])) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
signed main() {
    solve();
    return 0;
}