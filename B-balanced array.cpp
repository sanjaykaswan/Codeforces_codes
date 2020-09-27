#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int e = 2;
            int o = 1;
            for (int j = 0; j < n; j++)
            {
                if (j < n / 2)
                {
                    cout << e << " ";
                    e += 2;
                }
                else
                {
                    if (j == n - 1)
                    {
                        cout << (o + (n / 2)) << endl;
                    }
                    else
                    {
                        cout << o << " ";
                        o += 2;
                    }
                }
            }
        }
    }
    return 0;
}