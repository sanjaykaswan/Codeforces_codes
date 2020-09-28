#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , m,p;
    long int sum = 0;
    cin>>n>>m;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < m; i++)
    {
        if (v[i]<= 0)
        {
            sum -= v[i];
        }
        else
        {
            break;
        }
        
        
    }
    cout<<sum;
    
    return 0;
}