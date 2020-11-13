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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0, temp;
        for (int i = 2; i <= 35; i++)
        {
            temp = pow(2, i) - 1;
            if (n % temp)
                continue;
            else
                ans = n / temp;
        }
        cout << ans << endl;
    }
    return 0;
}