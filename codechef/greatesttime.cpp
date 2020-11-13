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
string largestTimeFromDigits(vector<int> &A)
{
    int max_time = -1;
    std::sort(A.begin(), A.end());
    do
    {
        int hour = A[0] * 10 + A[1];
        int minute = A[2] * 10 + A[3];

        if (hour < 24 && minute < 60)
        {
            int new_time = hour * 60 + minute;
            max_time = new_time > max_time ? new_time : max_time;
        }
    } while (next_permutation(A.begin(), A.end()));

    if (max_time == -1)
    {
        return "";
    }
    else
    {
        std::ostringstream strstream;
        strstream << std::setw(2) << std::setfill('0') << max_time / 60
                  << ":" << std::setw(2) << std::setfill('0') << max_time % 60;
        return strstream.str();
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a.push_back(p);
    }
    cout << largestTimeFromDigits(a) << endl;
    return 0;
}
