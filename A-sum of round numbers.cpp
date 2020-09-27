#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, count;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vector<int> v;
        int len = to_string(a).length();
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (a % 10 == 0)
            {
                a = a / 10;
            }
            else if (a % 10 != 0)
            {
                v.push_back((a % 10) * pow(10, j));
                a -= a % 10;
                a = a / 10;
                count += 1;
            }
        }
        cout << count << endl;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] % 10 != 0 && j > 0)
            {
                cout << v[j] + 1 << " ";
            }
            else
            {
                cout << v[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}