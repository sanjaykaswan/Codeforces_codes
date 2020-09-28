#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int>v;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());
        int p = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (v[j+1] - v[j] > 1)
            {
                cout<<"NO"<<endl;
                p = 1;
                break;
            }
            
        }
        if (p == 0)
        {
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}