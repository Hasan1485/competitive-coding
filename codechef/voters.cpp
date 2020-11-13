#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1];
    int b[n2];
    int c[n3];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n3; i++)
        cin >> c[i];

    n1 = removeDuplicates(a, n1);
    n2 = removeDuplicates(b, n2);
    n3 = removeDuplicates(c, n3);
    int mer[n1 + n2];
    int merged[n1 + n2 + n3];
    merge(a, (a + n1), b, (b + n2), mer);
    merge(c, (c + n3), mer, (mer + n1 + n2), merged);

    unordered_map<int, int> mp;
    for (int i = 0; i < n1 + n2 + n3; i++)
        mp[merged[i]]++;
    int count = 0;
    for (auto x : mp)
    {
        if (x.second >= 2)
            count++;
    }
    int i = 0;
    int aa[count];
    cout << count << endl;
    for (auto x : mp)
    {
        if (x.second >= 2)
            aa[i] = x.first;
        i++;
    }
    sort(aa, aa + count);
    for (int i = 0; i < count; i++)
        cout << aa[i] << endl;
    return 0;
}