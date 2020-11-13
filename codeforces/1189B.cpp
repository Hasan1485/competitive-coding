/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include <cstdio>
#include<bits/stdc++.h>
#define int long long int
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
void printArrangement(int a[], int n) { 
    sort(a, a + n); 
    int b[n];
    int low = 0, high = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            b[low++] = a[i];
        else
            b[high--] = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (b[n - 1] + b[1] <= b[i]) {
                cout << "NO";
                return;
            }
        }
        else if (i == (n - 1)) {
            if (b[n - 2] + b[0] <= b[i]) {
                cout << "NO";
                return;
            }
        }
        else {
            if (b[i - 1] + b[i + 1] <= b[i]) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    printArrangement(a, n);
}
signed main() {
    // OJ;
    solve();
    return 0;
}