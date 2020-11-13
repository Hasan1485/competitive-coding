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
void longestPalindrome(string a[],
    int n) {
    string pair1[n];
    string pair2[n];
    int r = 0;
    for (int i = 0; i < n; i++) {
        string s = a[i];
        reverse(s.begin(), s.end());
        for (int j = i + 1; j < n; j++) {
            if (a[i] != "" && a[j] != "") {
                if (s == a[j]) {
                    pair1[r] = a[i];
                    pair2[r++] = a[j];
                    a[i] = "";
                    a[j] = "";
                    break;
                }
            }
        }
    }
    string s1 = "";
    for (int i = 0; i < n; i++) {
        string s = a[i];
        reverse(a[i].begin(), a[i].end());
        if (a[i] != "") {
            if (a[i] == s) {
                s1 = a[i];
                break;
            }
        }
    }
    string ans = "";
    for (int i = 0; i < r; i++) {
        ans = ans + pair1[i];
    }
    if (s1 != "") {
        ans = ans + s1;
    }
    for (int j = r - 1; j >= 0; j--) {
        ans = ans + pair2[j];
    }
    cout << ans.size() << endl;
    cout << ans << endl;
}
void solve() {
    int n, m;
    cin >> n >> m;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    longestPalindrome(a, n);
}
signed main() {
    solve();
    return 0;
}