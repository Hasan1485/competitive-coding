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
        double p,s;
        cin>>p>>s;
        double l=(p-sqrt(p*p-24*s))/12.0;
        double V=l*(s/2.0-l*(p/4.0-l));
        cout << fixed;
        cout << setprecision(2);
        cout << V <<endl;
    }
}