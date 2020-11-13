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
        int a, b;
        cin >> a >> b;
        int c, d;
        cin >> c >> d;
        if (a + c == max(b, d) && b == d)
            cout << "Yes" << endl;
        else if (a + d == max(c, b) && c == b)
            cout << "Yes" << endl;
        else if (b + c == max(a, d) && a == d)
            cout << "Yes" << endl;
        else if (b + d == max(a, c) && a == c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}