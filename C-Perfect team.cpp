#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int q,m,c,x;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>c>>m>>x;
        long long int sum = (c + m + x)/3;
        if (sum <= m && sum <= c)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<min(m,c)<<endl;
        }
        
    }
    
    return 0;
}