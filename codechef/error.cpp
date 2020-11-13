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
        string s;
        cin >> s;
        string str = "010", str1 = "101";
        int present,present1;
        present = s.find(str);
        present1=s.find(str1);
        if (present != -1 || present1!=-1)
            cout << "Good" << endl;
        else
            cout << " Bad" << endl;
    }
    return 0;
}