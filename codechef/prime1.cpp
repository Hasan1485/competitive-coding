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
bool prime(int n)
{
    if (n % 2 == 0 && n != 2)
        return false;
    if (n == 1)
        return false;
    if (n == 0)
        return false;
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (prime(i))
                cout << i << endl;
        }
        cout<<endl;
    }
    return 0;
}