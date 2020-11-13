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
    int n;
    cin >> n;
    int c = 0;
    while (n--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int A = (int)pow((x2 - x1), 2) + (int)pow((y2 - y1), 2);
        int B = (int)pow((x3 - x2), 2) + (int)pow((y3 - y2), 2);
        int C = (int)pow((x3 - x1), 2) + (int)pow((y3 - y1), 2);
        if ( A > 0 && B > 0 && C > 0  && A == (B + C) || B == (A + C) || C == (A + B))
            c++;
    }
    cout << c << endl;
    return 0;
}