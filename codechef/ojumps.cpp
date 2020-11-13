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
    long int n, fact;
    cin >> n;
    if (n % 6 == 1 || n % 3 == 0)
        cout << "yes" << endl;
    else
    {
        cout<<"no"<<endl;
    }

    return 0;
}