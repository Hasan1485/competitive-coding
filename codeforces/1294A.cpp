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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int temp[3];
        temp[0] = a;
        temp[1] = b;
        temp[2] = c;
        sort(temp, temp + 3, greater<int>());
        int mx = temp[0];
        int res = 0;
        for (int i = 1; i < 3; i++)
            res += mx - temp[i];
        if (res == n)
            cout << "YES" << endl;
        else if (n < res)
            cout << "NO" << endl;
        else if (n > res) {
            int check = n - res;
            if (check % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}