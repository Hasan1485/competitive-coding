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
        string s;
        cin >> s;
        int ans = 2;
        int temp;
        for (int i = 1; i < s.length(); i++)
        {
            temp = s[i] - s[i - 1];
            if (temp < 0)
                temp += 26;
            ans += temp + 1;
        }
        int len = s.length() * 11;
        if (ans < len)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}