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
    for (int i = 0; i < n;i++)
        cin >> a[i];
    int prev = 0;
    for (int i = 0; i < n;i++) {
        a[i] += prev;
        prev = max(a[i], prev);
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}