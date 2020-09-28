#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long int n, a, f, s, sp, th;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        f = v[0];
        th = v[n - 1];
        int p = 0;
        if (f == th)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = 1; j < n; j++)
            {
                if (v[j] >= f && v[j] != th)
                {
                    s = v[j];
                    sp = j;
                    p = 1;
                    break;
                }
            }
            if (p == 1)
            {
                if ((f + s <= th) || ((f + th <= s) || (s + th <= f)))
                {
                    cout << 1 << " " << sp + 1 << " " << n << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}