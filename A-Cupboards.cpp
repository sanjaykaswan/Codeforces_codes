#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, l, r;
    long int cl = 0, cr = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == 0)
        {
            cl += 1;
        }
        if (r == 0)
        {
            cr += 1;
        }
    }
    if (cl <= n/2)
    {
        if (cr <= n/2)
        {
            cout<<cl+cr;
        }
        else
        {
            cout<<cl + n - cr;
        }
        
    }
    else
    {
        if (cr <= n/2)
        {
            cout<<n-cl+cr;
        }
        else
        {
            cout<<n - cl + n - cr;
        }
    }
    
    

    return 0;
}