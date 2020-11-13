/*
author-sesky_crocdile
once a crocodile
always a CROCODILE
*/
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
    int n, m;
    cin >> n >> m;
    string a[n];
    string b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int q;
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y; //73
        string s, ss;
        if (y <= n)
            s = a[y - 1];
        else if (y > n) //
        {
            if (y % n > 0)
                s = a[(y % n) - 1]; //
            else
                s = a[n - 1];
        }
        if (y <= m)
            ss = b[y - 1];
        else if (y > m)
        {
            if (y % m > 0)
                ss = b[(y % m) - 1];
            else 
                ss = b[m - 1];
        }
        cout << s << ss << endl;
    }
    return 0;
}