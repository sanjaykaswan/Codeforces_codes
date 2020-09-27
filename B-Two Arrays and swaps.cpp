#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, ai, bi, temp;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> a;
        vector<int> b;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> bi;
            b.push_back(bi);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int j = 0; j < m; j++)
        {
            temp = a[0];
            if (a[j] != b[n - j - 1] && a[j] < b[n - j - 1])
            {
                a[j] = b[n - j - 1];
                b[n - j - 1] = temp;
            }
            else
            {
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}