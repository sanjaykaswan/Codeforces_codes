#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long int n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        long int count = 1;
        if (n%2 == 0)
        {
            for (long int j = 1; j > 0; j++)
            {
                if (n == 2)
                {
                    cout<<count+1<<endl;
                    break;
                }
                else
                {
                    count += 1;
                    n -= 2;
                }
                
            }
            
        }
        else
        {
            if (n == 1)
            {
                cout<<1<<endl;
            }
            else
            {
                
                for (long int j = 1; j > 0; j++)
                {
                    if (n == 3)
                    {
                        cout<<count + 1<<endl;
                        break;
                    }
                    else
                    {
                        n -= 2;
                        count += 1;
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}