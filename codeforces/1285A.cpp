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
    string s;
    cin >> s;
    int l = 0, r = 0;
    for (int i = 0; i < n;i++) {
        if (s[i] == 'L')
            l++;
        else
            r++;
    }
    int mxl = 0 - l;
    int mxr = 0 + r;
    cout << abs(mxl - mxr) + 1 << endl;
    return 0;
}