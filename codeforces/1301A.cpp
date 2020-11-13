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
        string a, b, c;
        cin >> a >> b >> c;
        int n = a.length();
        for (int i = 0; i < n; i++) {
            if (c[i] != b[i])
                swap(b[i], c[i]);
            else if (c[i] != a[i])
                swap(c[i], a[i]);
        }
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}