#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, sum = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    if (n % sum != 0 && sum < n)
    {
        n = n % sum;
        for (int i = 0; i < 7; i++)
        {
            if (n > v[i])
            {
                n -= v[i];
            }
            else
            {
                cout << i + 1;
                break;
            }
        }
    }
    else if (n % sum == 0 && sum <= n)
    {
        n = sum;
        for (int i = 0; i < 7; i++)
        {
            if (n > v[i])
            {
                n -= v[i];
            }
            else
            {
                cout << i + 1;
                break;
            }
        }
    }
    else if (sum > n)
    {
        for (int i = 0; i < 7; i++)
        {
            if (n > v[i])
            {
                n -= v[i];
            }
            else
            {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}