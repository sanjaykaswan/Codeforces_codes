#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s1,s2,k;
    vector<string>a;
    vector<string>b;
    for (int i = 0; i < m; i++)
    {
        cin>>s1;
        cin>>s2;
        a.push_back(s1);
        b.push_back(s2);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        for (int j = 0; j < m ; j++)
        {
            if (k == a[j])
            {
                if (a[j].length() > b[j].length() )
                {
                    cout<<b[j]<<" ";
                }
                else
                {
                    cout<<a[j]<<" ";
                }
                
                
            }
            
        }
        
    }
    
    
    return 0;
}