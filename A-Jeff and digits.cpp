#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, a, count_z = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 5)
        {
            count += 1;
        }
    }
    count_z = n - count;
    count -= count % 9;
    if (count_z > 0 && count > 0)
    {
        for (int i = 0; i < count; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < count_z; i++)
        {
            cout << 0;
        }
    }
    else if(count_z > 0 && count == 0)
    {
        cout << 0;
    }
    else
    {
        cout<<-1;
    }
    

    return 0;
}