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
int merge(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k;
    int count = 0;

    i = left;
    j = mid;
    k = left;

    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            count += (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return count;
}
int mS(int arr[], int temp[], int left, int right) {
    int mid, count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        count = mS(arr, temp, left, mid);
        count += mS(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid + 1, right);
    }
    return count;
}

int check(int arr[], int n) {
    int temp[n];
    return mS(arr, temp, 0, n - 1);
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c = n * (n - 1) / 2 - 1;
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }
    if ((a, n) > c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}