/*
author-sesky_crocodile
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
int onesLeft(string s, int n) {
    int Left[n];
    int Right[n];
    int flips = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            flips++;
        }
        Left[i] = flips;
    }
    flips = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            flips++;
        }
        Right[i] = flips;
    }
    int ans = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (Left[i - 1] + Right[i] < ans) {
            ans = Left[i - 1] + Right[i];
        }
    }
    return ans;
}
int zerosLeft(string s, int n) {
    int Left[n];
    int Right[n];
    int flips = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            flips++;
        }
        Left[i] = flips;
    }
    flips = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            flips++;
        }
        Right[i] = flips;
    }
    int ans = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (Left[i - 1] + Right[i] < ans) {
            ans = Left[i - 1] + Right[i];
        }
    }
    return ans;
}
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') ones++;
        else zeros++;
    }
    int cur = min(onesLeft(s, n), zerosLeft(s, n));
    cout << min(cur, min(ones, zeros)) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}