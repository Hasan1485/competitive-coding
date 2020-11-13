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
        int x, n, m;
        cin >> x >> n >> m;
        int temp;
        for (int i = 0; i < n; i++) {
            temp = x; //10
            x = (x / 2) + 10;
            if (x >= temp) {
                x = temp;
                break;
            }
        }
        // cout << x << endl;
        for (int i = 0; i < m; i++)
            x -= 10;
        // cout << x << endl;
        if (x > 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}