#include <bits/stdc++.h> 
using namespace std;
void sortedAdjacentDifferences(int arr[], int n) {
    int ans[n];
    sort(arr + 0, arr + n);
    int l = 0, r = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (i % 2) {
            ans[i] = arr[l];
            l++;
        }
        else {
            ans[i] = arr[r];
            r--;
        }
    } 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    int arr[] = { 5, -2, 4, 8, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortedAdjacentDifferences(arr, n);
    return 0;
}