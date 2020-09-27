#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    int ca = 0, cb = 0, cc = 0, cd = 0;
    for (int i = 0; i < 4; i++)
    {
        if (v[i] == a)
        {
            ca += 1;
        }
        if (v[i] == b)
        {
            cb += 1;
        }
        if (v[i] == c)
        {
            cc += 1;
        }
        if (v[i] == d)
        {
            cd += 1;
        }
    }
    if (ca == 1)
    {
        if (cb == 1)
        {
            if (cc == 1)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        else if (cb == 2)
        {
            cout << 1;
        }
        else if (cb == 3)
        {
            cout << 2;
        }
    }
    else if (ca == 2)
    {
        if (cb == 1)
        {
            cout << 1;
        }
        else if (cb == 2)
        {
            if (cc == 1)
            {
                cout << 1;
            }
            else if (cc = 2)
            {
                cout << 2;
            }
        }
    }
    else if (ca==3)
    {
        cout<<2;
    }
    else
    {
        cout<<3;
    }
    

    return 0;
}