#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a = 0, b = 0;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < 1001; i++)
    {
        a = i;
        if ((a > n) || (a > m))
        {
            break;
        }

        for (int j = 0; j < 1001; j++)
        {
            b = j;

            if (((a * a) + b == n) && ((b * b) + a == m))
            {
                count += 1;
                // cout<<count<<endl;
            }
            if ((b > n) || (b > m))
            {
                break;
            }

            // cout << a << endl;
            // cout << b << endl;
            // cout << endl;
        }
    }

    cout << count;
    return 0;
}