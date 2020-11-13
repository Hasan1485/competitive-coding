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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> l(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];

        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (l[i] == 0)
                b.push_back(a[i]);
        }
        sort(b.begin(), b.end(), greater<int>());
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] == 0)
                a[i] = b[j++];
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}