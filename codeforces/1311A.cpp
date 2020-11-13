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
        int a, b;
        cin >> a >> b;
        if (b > a) {
            int diff = b - a;
            if (diff % 2 == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (a > b) {
            int diff = a - b;
            if (diff % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}