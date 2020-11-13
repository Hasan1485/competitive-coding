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
        cout << s[0];
        for (int i = 2; i < n - 1; i = i + 2)
            cout << s[i];
        cout << s[n - 1];
        cout << endl;
    }
    return 0;
}