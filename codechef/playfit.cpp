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
bool arraySorted(int n, int s[])
{
    int a = 1, d = 1, i = 0;
    while ((a == 1 || d == 1) && i < n - 1)
    {
        if (s[i] < s[i + 1])
            d = 0;
        else if (s[i] > s[i + 1])
            a = 0;
        i++;
    }
    return d == 1;
}
int maxDiff(int arr[], int arr_size)
{
    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];
    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] - min_element > max_diff)
            max_diff = arr[i] - min_element;
        if (arr[i] < min_element)
            min_element = arr[i];
    }
    return max_diff;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans= maxDiff(a, n);
        if(ans<0)
            cout<<"UNFIT"<<endl;
        else 
            cout<<ans<<endl;
    }
    return 0;
}