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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            a[i] = s[i] - '0';
        bool ok = 0;
        if (n % 2 == 0) {
            bool win = 0;
            for (int i = 1; i < n; i += 2) {
                if (a[i] % 2 == 0)
                    win = true;
            }
            if (win)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else if (n % 2 == 1) {
            bool win = 0;
            for (int i = 0; i < n; i += 2) {
                if (a[i] % 2 == 1)
                    win = true;
            }
            if (win)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}