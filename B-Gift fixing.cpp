#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int>va;
        vector<int>vb;
        cin>>n;
        long long int mina = pow(10,10);
        long long int minb = pow(10,10);
        long long int a,b,ans = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            va.push_back(a);
            if (a < mina)
            {
                mina = a;
            }
            
        }

        for (int j = 0; j < n; j++)
        {
            cin>>b;
            vb.push_back(b);
            if (b < minb)
            {
                minb = b;
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            ans += max((va[j] - mina) , (vb[j] - minb)); 
        }
        cout<<ans<<endl;
    }
    
    return 0;
}