#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        k = 2;
        while (n >= 3)
        {
            if (n % (int)(pow(2, k) - 1) == 0)
            {
                cout << (long long int)(n / (pow(2, k) - 1)) << endl;
                break;
            }
            else
            {
                k += 1;
            }
        }
    }

    return 0;
}