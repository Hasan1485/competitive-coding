#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int start_up()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed;
    return 0;
}
int static r = start_up();
int solve(int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
int solve(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}