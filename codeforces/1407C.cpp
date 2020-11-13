#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int query(int x, int y) {
    cout << "? " << x + 1 << " " << y + 1 << endl;
    int z;
    cin >> z;
    return z;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    int unknown = 0;
    for (int i = 1; i < n; i++) {
        int b = query(unknown, i);
        int c = query(i, unknown);
        if (b < c)
            a[i] = c;
        else {
            a[unknown] = b;
            unknown = i;
        }
    }
    a[unknown] = n;
    cout << "!";
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
    cout << endl;
}