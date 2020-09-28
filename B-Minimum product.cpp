#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long int a,b,x,y,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>x>>y>>n;
        if (n >= (a-x)+(b-y))
        {
            cout<<x*y<<endl;
        }
        else if (a-n >= x && b-n >= y)
        {
            if ((a-n)*b > a*(b-n))
            {
                cout<<a*(b-n)<<endl;
            }
            else
            {
                cout<<b*(a-n)<<endl;
            }
            
            
        }
        else if (a-n < x && b-n >= y)
        {
            if (x*(b-(n-(a-x))) > a*(b-n))
            {
                cout<<a*(b-n)<<endl;
            }
            else
            {
                cout<<x*(b-(n-(a-x)))<<endl;
            }
        }
        else if (a-n >= x && b-n < y)
        {
            if (y*(a-(n-(b-y))) > b*(a-n))
            {
                cout<<b*(a-n)<<endl;
            }
            else
            {
                cout<<y*(a-(n-(b-y)))<<endl;
            }
        }
        else
        {
            if (x*(b-(n-(a-x))) > y*(a-(n-(b-y))))
            {
                cout<<y*(a-(n-(b-y)))<<endl;
            }
            else
            {
                cout<<x*(b-(n-(a-x)))<<endl;
            }
            
        }
        
        
    }
    
    return 0;
}