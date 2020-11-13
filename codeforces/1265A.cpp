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
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1] && s[i] != '?') {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') {
            if (i == 0) {
                if (s[i + 1] == 'a')
                    s[i] = 'b';
                else if (s[i + 1] == 'b')
                    s[i] = 'c';
                else if (s[i + 1] == 'c')
                    s[i] = 'a';   
                else 
                    s[i] = 'a';
            }
            else if (i == s.length() - 1) {
                if (s[i - 1] == 'a')
                    s[i] = 'b';
                else if (s[i - 1] == 'b')
                    s[i] = 'c';
                else if (s[i - 1] == 'c')
                    s[i] = 'a';
                else 
                    s[i] = 'a';
            }
            if (s[i - 1] == 'a' && s[i + 1] == 'b')
                s[i] = 'c';
            else if (s[i - 1] == 'a' && s[i + 1] == 'c')
                s[i] = 'b';
            else if (s[i - 1] == 'b' && s[i + 1] == 'a')
                s[i] = 'c';
            else if (s[i - 1] == 'b' && s[i + 1] == 'c')
                s[i] = 'a';
            else if (s[i - 1] == 'c' && s[i + 1] == 'b')
                s[i] = 'a';
            else if (s[i - 1] == 'c' && s[i + 1] == 'a')
                s[i] = 'b';
            else if (s[i - 1] == 'a' && s[i + 1] == '?')
                s[i] = 'b';
            else if (s[i - 1] == 'b' && s[i + 1] =='?')
                s[i] = 'c';
            else if (s[i - 1] == 'c' && s[i + 1] == '?')
                s[i] = 'a';
            else if (s[i - 1] == 'c' && s[i + 1] == 'c')
                s[i] = 'b';
            else if (s[i - 1] == 'b' && s[i - 1] == 'b')
                s[i] = 'c';
            else if (s[i - 1] == 'a' && s[i + 1] == 'a')
                s[i] = 'b';
        }
    }
    cout << s << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}