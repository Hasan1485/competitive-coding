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
    int n, minn;
    while (t--)
    {
        cin >> n;
        minn = n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                minn= min(abs((n / i) - i), minn);
        }
        cout << minn << endl;
    }
    return 0;
}
