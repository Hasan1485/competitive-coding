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
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        cout << s.size() << endl;
    }
    return 0;
}