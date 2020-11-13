/*
author-sesky_crocdile
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
int maxCountSameSUM(int arr[], int n) {
    unordered_map<int, int> M;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            M[arr[i] + arr[j]]++;
        }
    }
    int max_count = 0;
    for (auto ele : M) {
        if (max_count < ele.second) {
            max_count = ele.second;
        }
    }
    return max_count;
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << maxCountSameSUM(a, n) << endl;
}
signed main() {
    solve();
    return 0;
}