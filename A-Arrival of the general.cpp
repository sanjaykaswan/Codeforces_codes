#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h;
    int min = 200, mi = 0;
    int max = 0, mxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        if (h > max)
        {
            max = h;
            mxi = i;
        }
        if (h <= min)
        {
            min = h;
            mi = i;
        }
    }
    // cout<<"mxi is  "<<mxi<<" mi is   "<<mi<<endl;
    if (mxi > mi)
    {
        cout<< mxi + n - 2 - mi;
    }
    else
    {
        cout<< mxi + n - 1 - mi;
    }
    
    
    

    return 0;
}