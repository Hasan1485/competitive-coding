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
        int r, g, b;
        cin >> r >> g >> b;
        int mx = max(max(r, g), b);
        if (mx == r) {
            if (g + b + 1 >= r)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (mx == b) {
            if (r + g + 1 >= b)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (mx == g) {
            if (r + b + 1 >= g)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}