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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && b[i] == 0)
            x++;
        if (b[i] == 1 && a[i] == 0)
            y++;
    }
    if (x == 0)
        puts("-1");
    else {
        int ans;
        for (int i = 0;; i++) {
            if (x * i > y) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}