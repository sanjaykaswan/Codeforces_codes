#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    vector<int> v;
    cin >> n >> p;
    int ans = 0;
    int k;
    for (int i = 0; i < n; i++)
    {

        cin >> k;
        v.push_back(k);
    }

    if (p > n / 2)
    {
        vector<int> vr;
        p = n - p + 1;
        for (int i = 0; i < n; i++)
        {
            vr.push_back(v[n - 1 - i]);
        }
        for (int i = 0; i < p; i++)
        {
            if (vr[p - 1 - i] + vr[p - 1 + i] == 2 && i == 0)
            {
                ans += 1;
            }
            else if (vr[p - 1 - i] + vr[p - 1 + i] == 2)
            {
                ans += 2;
            }
        }
        for (int i = (2 * p) - 1; i < n; i++)
        {
            if (vr[i] == 1)
            {
                ans += 1;
            }
        }
        cout << ans;
    }
    else
    {
        for (int i = 0; i < p; i++)
        {
            if (v[p - 1 - i] + v[p - 1 + i] == 2 && i == 0)
            {
                ans += 1;
            }
            else if (v[p - 1 - i] + v[p - 1 + i] == 2)
            {
                ans += 2;
            }
        }
        for (int i = (2 * p) - 1; i < n; i++)
        {
            if (v[i] == 1)
            {
                ans += 1;
            }
        }
        cout << ans;
    }

    return 0;
}