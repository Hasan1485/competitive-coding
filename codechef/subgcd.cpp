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

        int temp = a[0];
        for (int i = 1; i < n; i++)
            temp = __gcd(temp, a[i]);

        if (temp == 1)
            cout << n << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}