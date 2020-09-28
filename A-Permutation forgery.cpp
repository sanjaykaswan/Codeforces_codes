#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,p;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        vector<int>v;
        for (int j = 0; j < n; j++)
        {
            cin>>p;
            v.push_back(p);
        }
        for (int j = n-1; j >= 0; j--)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}