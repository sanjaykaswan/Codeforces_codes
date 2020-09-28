#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n, j, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> j >> k;
        if ((n / k) >= j)
        {
            cout << j << endl;
        }
        else
        {
            if ((j - (n / k)) % (k - 1) == 0)
            {
                cout << ((n / k) - ((j - (n / k)) / (k - 1)))<< endl;
            }
            else
            {
                cout << ((n / k) - ((j - (n / k)) / (k - 1)) - 1) << endl;
            }
        }
    }

    return 0;
}