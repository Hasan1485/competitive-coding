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
    string s; int k;
    cin >> s >> k;
    int n = s.length();
    int cur = 0, ques = 0, star = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != '*') {
            cur++;
        }
        else if (s[i] == '?') {
            ques++;
        }
        else {
            star++;
        }
    }
    if (cur == k) {
        for (int i = 0; i < n; i++) {
            if (s[i] != '?' && s[i] != '*') {
                cout << s[i];
            }
        }
    }
    else if (cur > k) {
        int tot = ques + star;
        if (tot < cur - k) {
            cout << "Impossible" << endl;
        }
        else {
            int need = cur - k;
            for (int i = 0; i < n; i++) {
                if ((s[i + 1] == '?' || s[i + 1] == '*') && need > 0) {
                    need--;
                    continue;
                }
                else if (s[i] != '?' && s[i] != '*'){
                    cout << s[i];
                }
            }
        }
    }
    else if (k > cur) {
        if (star == 0) {
            cout << "Impossible" << endl;
        }
        else {
            int nee = k - cur + 1;
            for (int i = 0; i < n; i++) {
                if (s[i + 1] == '*' && nee > 0) {
                    while (nee > 0) {
                        cout << s[i];
                        nee--;
                    }
                }
                else if (s[i] != '?' && s[i] != '*') {
                    cout << s[i];
                }
            }
        }
    }
}
signed main() {
    solve();
    return 0;
}