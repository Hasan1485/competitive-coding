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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;;
        int i = 0, ans = 1;
        while (i != k) {
            ll j = i;
            if (s[i] == '?') {
                set<char> pos;
                while (j < n) {
                    pos.insert(s[j]);
                    j += k;
                }
                if (pos.find('1') != pos.end() && pos.find('0') != pos.end())
                    ans = 0;
                else if (pos.find('1') != pos.end()) {
                    j = i;
                    while (j < n) {
                        s[j] = '1';
                        j += k;
                    }
                }
                else if (pos.find('0') != pos.end()) {
                    j = i;
                    while (j < n) {
                        s[j] = '0';
                        j += k;
                    }
                }
            }
            else {
                if (s[i] == '1') {
                    j = i;
                    while (j < n) {
                        if (s[j] == '0') {
                            ans = 0;
                            break;
                        }
                        j += k;
                    }
                }
                else {
                    j = i;
                    while (j < n) {
                        if (s[j] == '1') {
                            ans = 0;
                            break;
                        }
                        j = j + k;
                    }
                }
            }
            if (ans == 0)
                break;
            i++;
        }
        if (ans == 0)
            cout << "NO" << endl;
        else {
            i = 0;
            int c = 0, d = 0, e = 0;
            while (i != k) {
                if (s[i] == '?')
                    c++;
                else if (s[i] == '1')
                    d++;
                else
                    e++;
                i++;
            }
            if (d <= k / 2 && e <= k / 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}