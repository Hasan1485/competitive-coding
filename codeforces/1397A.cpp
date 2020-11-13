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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        string s;
        for (int i = 0; i < n; i++)
            s += v[i];
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        bool ans = true;
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i] % n != 0)
                ans = false;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}