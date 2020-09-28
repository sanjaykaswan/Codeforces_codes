#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long int n,k;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        if (k%2 != 0)
        {
            if (n>=k)
            {
                if (n%2 != 0)
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
                
            }
            else
            {
                cout<<k-n<<endl;
            }
            
        }
        else
        {
            if (n>=k)
            {
                if (n%2 == 0)
                {
                    cout<<0<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
                
            }
            else
            {
                cout<<k-n<<endl;
            }
        }
        
        
    }
    
    return 0;
}