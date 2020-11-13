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
int temp(string s)
{
    int c = 0, d = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
            c++;
        else if (s[i] == '7')
            d++;
    }
    return s.length() - (c + d);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int ans = temp(n);
        cout << ans << endl;
    }
    return 0;
}