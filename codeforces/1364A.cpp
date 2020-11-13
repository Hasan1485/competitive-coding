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
int MaxSubarrayLength(int arr[], int n, int k) {
    int left = -1;
    int right;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if ((arr[i] % k) != 0) {
            if (left == -1)
                left = i;
            right = i;
        }
        sum += arr[i];
    }
    if (sum % k != 0)
        return n;
    else if (left == -1)
        return -1;
    else {
        int prefix_length = left + 1;
        int suffix_length = n - right;
        return n - min(prefix_length, suffix_length);
    }
}

void solve() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << MaxSubarrayLength(a, n, x) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}