#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v;
        int odd = 0, even = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> k;
            v.push_back(k);
            if (j % 2 == 0 && k % 2 != 0)
            {
                odd += 1;
            }
            else if (j % 2 != 0 && k%2 == 0)
            {
                even += 1;
            }
        }
        if (odd == even)
        {
            cout<<odd<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }

    return 0;
}