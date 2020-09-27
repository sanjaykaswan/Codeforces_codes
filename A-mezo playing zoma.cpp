#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l = 0, r = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l += 1;
        }
        else
        {
            r += 1;
        }
    }
    cout<<l+r+1;
    return 0;
}