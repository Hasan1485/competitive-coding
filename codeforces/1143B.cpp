/*
author-sesky_crocodile
once a crocodile
always a CROCODILE
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int product(int x) {
    int prod = 1;
    while (x) {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}
int findNumber(int l, int r) {
    string a = to_string(l);
    string b = to_string(r);
    int ans = r;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '0')
            continue;
        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';
        for (int j = i + 1; j < curr.size(); j++)
            curr[j] = '9';
        int num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');
        if (num >= l && product(ans) < product(num))
            ans = num;
    }
    return ans;
}
void solve() {
    int n;
    cin >> n;
    int num = findNumber(1, n);
    cout << product(num) << endl;
}
signed main() {
    solve();
    return 0;
}