#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,p,count,ans;
    string s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        p = 0;
        ans = 0;
        cin>>s;
        if (s[0] == '1')
        {
            p = 1;
        }
        count = 0;
        vector<int>v;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '1')
            {
                if (p == 1)
                {
                    count += 1;
                }
                else
                {
                    p = 1;
                    count += 1;
                }
                if (j == s.size()-1)
                {
                    v.push_back(count);
                }
                else
                {
                    if (s[j+1] == '0')
                    {
                        v.push_back(count);
                        count = 0;
                    }
                    
                }
                
            }
            else
            {
                p = 0;
            }
            
        }
        sort(v.begin(),v.end());
        for (int j = v.size()-1; j >= 0 ; j -= 2)
        {
            ans += v[j];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}