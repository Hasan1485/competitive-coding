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
    int a, b;
    cin >> a >> b;
    int dif = abs(a - b);
    if (dif % 10 < 9)
        dif++;
    else
        dif--;
    cout << dif << endl;
    return 0;
}
