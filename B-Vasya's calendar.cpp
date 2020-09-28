#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int k,d;
    int n;
    cin>>d;
    cin>>n;
    long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>k;
        if (i<n-1)
        {
            ans += d - k;
        }
        
    }
    cout<<ans;
    return 0;
}