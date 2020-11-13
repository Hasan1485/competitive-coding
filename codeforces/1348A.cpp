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
            cout << 2 << endl;
        else {
            int total = pow(2, n); //16
            for (int i = 1; i <= (n / 2) - 1; i++)
                total += pow(2, i);
            int sum = 0;
            for (int i = n / 2; i < n; i++)
                sum += pow(2, i);
            cout << abs(total - sum) << endl;
        }
    }
    return 0;
}