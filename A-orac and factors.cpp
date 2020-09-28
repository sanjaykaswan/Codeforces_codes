#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int n, m;
    cin >> t;
    int p = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if (n % 2 == 0)
        {
            cout << (n + (m * 2)) << endl;
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (n % 2 == 0)
                {
                    cout << (n + ((m - j) * 2)) << endl;
                    p += 1;
                    break;
                }
                else
                {
                    for (int k = 2; k < n + 1; k++)
                    {
                        if (n % k == 0)
                        {
                            n += k;
                            break;
                        }
                    }
                }
            }
            if (p == 0 )
            {
                cout<<n<<endl;
            }
            
        }
    }

    return 0;
}