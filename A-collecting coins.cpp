#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,a,b,c,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int max = 0;
        cin>>a>>b>>c>>n;
        if (a>max)
        {
            max += a;
        }
        if (b>max)
        {
            max = b;
        }
        if (c>max)
        {
            max = c;
        }
        if ((n-(abs(max-a)+abs(max-b)+abs(max-c)))%3 == 0 && (n-(abs(max-a)+abs(max-b)+abs(max-c)))>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
    }
    
    return 0;
}