#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    long long int a, b, c;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        vector<int> v;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        if (v[2] - v[0] <= 2)
        {
            cout << 0<<endl;
        }
        else
        {
            cout << (v[2] - v[0] - 2) * 2<<endl;
        }
    }

    return 0;
}