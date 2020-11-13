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
        vector<int> a(3);
        for (auto& it : a)
            cin >> it;
        sort(a.begin(), a.end());
        if (a[1] != a[2])
            cout << "NO" << endl;
        else
            cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
    }
    return 0;
}
