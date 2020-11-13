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
int findLastIndex(vector<char> str, char x)
{
    for (int i = str.size() - 1; i >= 0; i--)
        if (str[i] == x)
            return i;

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        int temp;
        cin >> k;
        vector<char> v(k + 1);
        v[k] = 'a';
        for (int i = k - 1; i >= 0; i--)
        {
            if (v[i] <= 122)
                v[i] = v[i + 1] + 1;
            if (v[i] > 122)
            {
                temp = (v[i] - 122) + 96;
                v[i] = temp;
            }
        }
        int n = v.size();
        int pos = k / 25;
        char ch = 97 + (k % 25);
        if (pos > 0 && k != 25)
        {
            for (int j = 0; j < pos; j++)
            {
                if (ch == 'a')
                    ch = 'z';
                cout << ch;
                ch = ch - 1;
            }
        }
        for (int i = 0; i < n; i++)
            cout << v[i];
        cout << endl;
    }
    return 0;
}
// int flag = 0;
// if (k <= 26)
//     flag = 1;
// int pos = findLastIndex(v, 'z') - 1;
// if (flag == 0)
// {
//     if (v[pos] == 'a')
//     {
//         for (int i = pos; i >= 0; i--)
//         {
//             if (v[i] == 'z')
//             {
//                 sort(v.begin() + i, v.begin() + pos + 1);
//                 pos = i - 1;
//             }
//             else if (i == 0)
//                 sort(v.begin(), v.begin() + pos + 1);
//         }
//     }
// }