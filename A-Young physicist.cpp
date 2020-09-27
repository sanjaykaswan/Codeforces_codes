#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        cin >> x >> y >> z;
        t.push_back(x);
        t.push_back(y);
        t.push_back(z);
        v.push_back(t);
    }
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += v[j][i];
        }
        if (sum != 0)
        {
            cout << "NO";
            break;
        }
        else if (sum == 0 && i == 2)
        {
            cout << "YES";
        }
    }

    return 0;
}