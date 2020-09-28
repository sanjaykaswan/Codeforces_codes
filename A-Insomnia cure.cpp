#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ok;
    int ol;
    int om;
    int on;
    long int d;
    cin >> ok;
    cin >> ol;
    cin >> om;
    cin >> on;
    cin >> d;
    int k = ok ,l = ol,n = on,m = om;
    vector<int> v;
    if ((k == 1) || (l == 1) || (m == 1) || (n == 1))
    {
        cout << d;
    }
    else
    {
        for (size_t i = 0; i < d; i++)
        {
            v.push_back(1);
        }
        for (int i = 0; i < d; i++)
        {
            if (i == k - 1)
            {
                v[i] = 0;
                k += ok;
            }
            if (i == l - 1)
            {
                v[i] = 0;
                l += ol;
            }
            if (i == m - 1)
            {
                v[i] = 0;
                m += om;
            }
            if (i == n - 1)
            {
                v[i] = 0;
                n += on;
            }
            // cout << v[i] << "  ";
            // cout<<k<<" "<<l<<" "<<m<<" "<<n<<endl;
        }

        int count = 0;
        for (int i = 0; i < d; i++)
        {
            if (v[i] == 0)
            {
                count += 1;
            }
        }
        cout << count;
    }
    return 0;
}