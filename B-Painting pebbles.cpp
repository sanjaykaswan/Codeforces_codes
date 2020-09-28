#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m, p = 0;
    cin >> n >> k;
    vector<int> v;
    int max = 0, min = 102;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
        if (m > max)
        {
            max = m;
        }
        if (m < min )
        {
            min = m;
        }
        
    }
    if ((max- min) > k)
    {
        cout<<"NO";
        p = 1;
    }
    
    if (p == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            int c = 1;
            for (int j = 0; j < v[i]; j++)
            {
                if (c == k)
                {
                    cout << c << " ";
                    c = 1;
                }
                else
                {
                    cout << c << " ";
                    c += 1;
                }
            }
            cout << endl;
        }
    }

    return 0;
}