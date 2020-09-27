#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b, ae, be;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> va;
        vector<int> vb;
        int maxa = 0;
        int maxb = 0;
        cin >> n >> a >> b;
        for (int j = 0; j < a; j++)
        {
            cin >> ae;
            va.push_back(ae);
            if (ae > maxa)
            {
                maxa = ae;
            }
        }
        for (int j = 0; j < b; j++)
        {
            cin >> be;
            vb.push_back(be);
            if (be > maxb)
            {
                maxb = be;
            }
        }
        if (maxa>maxb)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // cout<<maxa<<"    "<<maxb<<endl;
        
    }

    return 0;
}