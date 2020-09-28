#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    
    string s;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>s;
            if (j == n-1)
            {
                for (int k = 0; k < m; k++)
                {
                    if (s[k] == 'D')
                    {
                        ans += 1;
                    }
                    
                }
                
            }
            else
            {
                if (s[m-1] == 'R')
                {
                    ans += 1;
                }
                
            }
            
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}