/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
#include <bits/stdc++.h>
#define ll long long int
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
    int check = 1;
    for (int i = 1; i < n; i++)
        if (s[i] < s[i - 1])
            check = 0;
    if (check) {
        cout << s << endl;
        return;
    }
    string ans;
    int i = 0;
    while (s[i] != '1' && i < n) {
        ans.push_back('0');
        i++;
    }
    ans.push_back('0');
    int j = n - 1;
    while (s[j] != '0') {
        ans.push_back('1');
        j--;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}