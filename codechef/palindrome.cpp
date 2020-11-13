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
int palindrome(string str)
{
    string copy=str;
    reverse(str.begin(), str.end()); 
    return copy==str;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string k;
        cin>>k;
        while(true)
        {
            ll myint1 = stoi(k);
            myint1++;
            k=to_string(myint1);
            if(palindrome(k))
            {
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}
