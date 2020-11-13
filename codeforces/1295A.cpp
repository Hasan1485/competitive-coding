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
        if (n == 2)
            cout << 1 << endl;
        else if (n == 3)
            cout << 7 << endl;
        else {
            if (n % 2 == 0) {
                for (int i = 0; i < n / 2; i++)
                    cout << 1;
                cout << endl;
            }
            else {
                for (int i = 0; i < n / 2; i++) {
                    if (i == 0)
                        cout << 7;
                    else
                        cout << 1;
                }
                cout << endl;
            }
        }
    }
    return 0;
}