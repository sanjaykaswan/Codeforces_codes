#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int row = 0, col = 0;
        vector<vector<int>> v;
        
        for (int j = 0; j < n; j++)
        {
            vector<int> v1;
            int countr = 0;
            for (int k = 0; k < m; k++)
            {
                int e;
                cin >> e;
                if (e > 0)
                {
                    countr += 1;
                }

                v1.push_back(e);
            }
            if (countr == 0)
            {
                row += 1;
            }

            v.push_back(v1);
        }
        for (int j = 0; j < m; j++)
        {
            int countl = 0;
            for (int k = 0; k < n; k++)
            {
                if (v[k][j] == 1)
                {
                    countl += 1;
                    break;
                }
            }
            if (countl == 0)
            {
                col += 1;
            }
        }
        if (min(row, col) % 2 == 0)
        {
            cout << "Vivek" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
        }
    }

    return 0;
}