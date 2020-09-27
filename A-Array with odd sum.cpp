#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, counto = 0, counte = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a % 2 != 0)
            {
                counto += 1;
            }
            else
            {
                counte += 1;
            }
        }
        if (counte == 0)
        {
            if (counto % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (counto == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

        counte = 0;
        counto = 0;
    }

    return 0;
}