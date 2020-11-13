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
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}
void findMissing(int a[], int b[], int n, int m, int targ) {
    unordered_set<int> s;
    vector<int> ans;
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    for (int i = 0; i < n; i++) {
        if (s.find(a[i]) == s.end())
            ans.push_back(a[i]);
    }
    cout << ans[targ - 1] + 1 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int size = removeDuplicates(a, n);
        int b[size];
        for (int i = 0; i < size; i++) {
            b[i] = a[i];
        }
        int check[b[size - 1]];
        for (int i = 0; i < b[size - 1]; i++) {
            check[i] = i + 1;
        }
        int temp = abs(size - b[size - 1]);
        if (temp == x)
            cout << b[size - 1] << endl;
        else if (x > temp) {
            int extra = x - temp;
            cout << b[size - 1] + extra << endl;
        }
        else
            findMissing(check, b, b[size - 1], size, x);
    }
    return 0;
}