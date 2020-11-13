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
        int N, first = 1;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int min = arr[0];
        for (int i = 1; i < N; i++)
        {
            if (arr[i] < min)
            {
                first++;
                min = arr[i];
            }
        }
        cout << first << endl;
    }
    return 0;
}