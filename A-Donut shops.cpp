#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long int a , b , c;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        if (a < c)
        {
            cout<<1<< " ";
        }
        else if (a >= c)
        {
            cout<<-1<<" ";
        }
        if (a*b <= c)
        {
            cout<<-1<<endl;
        }
        else if (a*b > c)
        {
            cout<<b<<endl;
        }
        
    }
    
    return 0;
}