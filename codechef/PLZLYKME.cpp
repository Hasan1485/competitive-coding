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
        int l, d, s, c;
        cin >> l >> d >> s >> c;
        if (d == 1)
        {
            if (s >= l)
                cout << "ALIVE AND KICKING" << endl;
            else
                cout << "DEAD AND ROTTING" << endl;
        }
        else
        {
            int ans = s;
            for (int i = 2; i <= d; i++)
            {
                ans *= (c + 1);
                if (ans >= l)
                {
                    ans = -1;
                    break;
                }
            }
            if (ans == -1)
                cout << "ALIVE AND KICKING" << endl;
            else
                cout << "DEAD AND ROTTING" << endl;
        }
    }
    return 0;
}