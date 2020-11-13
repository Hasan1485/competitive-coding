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
        int n, a, b;
        cin >> n >> a >> b;
        char v[a];
        char ch = 'a';
        for (int i = 0; i < b; i++) {
            v[i] = ch;
            ch++;
        }
        for (int i = b; i < a; i++)
            v[i] = 'a';

        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (pos == a)
                pos = 0;
            cout << v[pos];
            pos++;
        }
        cout << endl;
    }
    return 0;
}