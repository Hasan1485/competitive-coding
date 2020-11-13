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
        if (360 % n == 0)
            cout << "y"<< " ";
        else
            cout << "n"<< " ";
        if (n <= 360)
            cout << "y"<< " ";
        else
            cout << "n" << " ";
        if (((n * (n + 1)) / 2) <= 360)
            cout << "y"<< " ";
        else
            cout << "n" << " ";
        cout << endl;
    }
    return 0;
}