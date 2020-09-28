#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long int x1,x2,x3,y1,y2,y3,z1,z2,z3,ans;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ans = 0;
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        if (z1<=y2)
        {
            ans += 2*z1;
            y2 = y2 -z1;
            z1 = 0;
            if (y1<=y2)
            {
                cout<<ans<<endl;
            }
            else
            {
                y1 -= y2;
                y2 = 0;
                if (y1 <= x2)
                {
                    cout<<ans<<endl;
                }
                else
                {
                    y1 -= x2;
                    ans -= 2*y1;
                    cout<<ans<<endl; 
                } 
            } 
        } 
        else
        {
            ans += 2*y2;
            z1 -= y2;
            y2 = 0;
            if (y1<=x2)
            {
                cout<<ans <<endl;
            }
            else
            {
                y1 -= x2;
                ans -= 2*y1;
                cout<<ans<<endl;
            }
            
        }
        
    }
    
    return 0;
}