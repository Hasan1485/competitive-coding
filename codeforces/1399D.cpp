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
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
            v.push_back(s[i] - '0');
        int zero = 0, one = 0, res = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                if (one > 0) {
                    ans.push_back(res - zero);
                    zero++;
                    one--;
                }
                else {
                    res++;
                    ans.push_back(res);
                    zero++;
                }
            }
            else if (v[i] == 1) {
                if (zero > 0) {
                    ans.push_back(one + 1);
                    one++;
                    zero--;
                }
                else {
                    res++;
                    ans.push_back(res);
                    one++;
                }
            }
        }
        cout << res << endl;
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}