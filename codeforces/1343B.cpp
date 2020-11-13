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
        int pos = n / 2;
        if (pos % 2 == 1)
            cout << "No" << endl;
        else {
            cout << "Yes" << endl;
            int ans = 2;
            for (int i = 0; i < n / 2; i++) {
                cout << ans << " ";
                ans += 2;
            }
            int ans1 = 1;
            for (int i = 1; i <= n / 2; i++) {
                if (i == n / 2)
                    cout << ans1 + n / 2;
                else
                    cout << ans1 << " ";
                ans1 += 2;
            }
            cout << endl;
        }
    }
    return 0;
}