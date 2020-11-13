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
        string s;
        cin >> s;
        int n = s.length();
        string f = s.substr(n - 2);
        if (f == "po") {
            cout << "FILIPINO" << endl;
            continue;
        }
        string j = s.substr(n - 4);
        if (j == "desu" || j == "masu")
            cout << "JAPANESE" << endl;
        else
            cout << "KOREAN" << endl;
    }
    return 0;
}