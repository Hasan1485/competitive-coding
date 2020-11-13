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
        int g;
        cin >> g;
        while (g--)
        {
            int I, n, q;
            cin >> I >> n >> q;
            if (n % 2 == 0)
                cout << n / 2 << endl;
            else
            {
                if (I == 1)
                {
                    if (q == 1 && n != 3)
                        cout << 1 + ((n - 3) / 2) << endl;
                    else if (q == 1 && n == 3)
                        cout << 1 << endl;
                    else if (q == 2 && n == 3)
                        cout << 2 << endl;
                    else if (q == 2 && n != 3)
                        cout << 2 + ((n - 3) / 2) << endl;
                }
                if (I == 2)
                {
                    if (q == 2 && n != 3)
                        cout << 1 + ((n - 3) / 2) << endl;
                    else if (q == 2 && n == 3)
                        cout << 1 << endl;
                    else if (q == 1 && n == 3)
                        cout << 2 << endl;
                    else if (q == 1 && n != 3)
                        cout << 2 + ((n - 3) / 2) << endl;
                }
            }
        }
    }
    return 0;
}