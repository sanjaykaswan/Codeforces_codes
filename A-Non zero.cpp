#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,a,count,sum ;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        count = 0;
        sum = 0;
        vector<int>v;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            if (a == 0)
            {
                a += 1;
                count += 1;
            }
            sum += a;
            v.push_back(a);
        }
        if (sum == 0)
        {
            count += 1;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}