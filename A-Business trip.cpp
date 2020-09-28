#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, a;
    cin >> h;
    vector<int> v;
    int max = 0, sum = 0, p = 0, ans = 1 ,summ = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
            p = i;
        }
        summ += a;

        v.push_back(a);
    }
    sum = max;
    if (summ < h)
    {
        cout<<-1;
    }
    
    else
    {
        if (h > 0)
        {
            for (int j = 0; j < 12; j++)
            {
                v[p] = 0;
                max = 0;
                if (sum < h)
                {
                    for (int i = 0; i < 12; i++)
                    {
                        if (v[i] > max)
                        {
                            max = v[i];
                            p = i;
                        }
                    }
                    ans += 1;
                    sum += max;
                }
                else
                {
                    break;
                }
            }
            cout << ans;
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}