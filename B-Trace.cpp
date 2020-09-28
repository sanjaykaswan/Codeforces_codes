#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n;
    float ans = 0;
    float pi = 3.1415926536;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        v.push_back(r);
    }
    sort(v.begin(), v.end());
    if (n % 2 == 0)
    {
        if (n == 2)
        {
            ans += pi * (pow(v[1], 2) - pow(v[0], 2));
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                ans += pi * (pow(v[i + 1], 2) - pow(v[i], 2));
            }
        }
        cout << ans;
    }
    else
    {
        ans += pi * pow(v[0], 2);
        for (int i = 1; i < n; i += 2)
        {
            ans += pi * (pow(v[i + 1], 2) - pow(v[i], 2));
        }
        cout << ans;
    }

    return 0;
}