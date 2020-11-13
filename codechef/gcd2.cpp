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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
ll reduceB(ll a, string b)
{
    ll mod = 0;
    for (int i = 0; i < b.length(); i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return gcd(mod, a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        string s;
        cin >> s;
        if (a == 0)
            cout << s << endl;
        else
        {
            int temp = reduceB(a, s);
            cout << temp << endl;
        }
    }
    return 0;
}