#include <bits/stdc++.h> 
using namespace std; 
void longestSubarray(int* A, int N, int X) {
    int maxLen = 0;
    int beginning = 0;
    map<int, int> window;
    int start = 0, end = 0;
    for (; end < N; end++) {
        window[A[end]]++;
        auto minimum = window.begin()->first;
        auto maximum = window.rbegin()->first;
        if (maximum - minimum <= X) {
            if (maxLen < end - start + 1) {
                maxLen = end - start + 1;
                beginning = start;
            }
        } 
        else {
            while (start < end) {
                window[A[start]]--;
                if (window[A[start]] == 0) {

                    window.erase(window.find(A[start]));
                }
                start++;
                auto minimum = window.begin()->first;
                auto maximum = window.rbegin()->first;
                if (maximum - minimum <= X)
                    break;
            }
        }
    }
    for (int i = beginning; i < beginning + maxLen; i++)
        cout << A[i] << " ";
}

// Driver Code 
int main() {
    int arr[] = {1, 10, 17, 12, 15, 2 }, X = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    longestSubarray(arr, n, X);
    return 0;
}