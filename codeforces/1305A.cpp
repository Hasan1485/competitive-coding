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
        int b[n];
        int total = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int sum[n];
        for (int i = 0; i < n; i++)
            sum[i] = a[i] + b[i];
        set<int> check;
        for (int i = 0; i < n; i++)
            check.insert(sum[i]);
        if (check.size() == n) {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
        }
        else {
            sort(a, a + n);
            sort(b, b + n);
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}