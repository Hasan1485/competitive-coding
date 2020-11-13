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
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 != 0)
            puts("YES");
        else {
            int even = 0, odd = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
            if (even >= 1 && odd >= 1)
                puts("YES");
            else
                puts("NO");
        }
    }
    return 0;
}