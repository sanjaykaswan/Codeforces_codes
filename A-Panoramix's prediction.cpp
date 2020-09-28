#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans = 0;
    int p = 0;
    for (int i = n+1 ; i < m+1; i++)
    {
        for (int j = 2; j < i+1; j++)
        {
            if (i%j == 0 && j != i)
            {
                break;
            }
            
            else if (i%j == 0 && j == i)
            {
                ans += i;
                p = 1;
                break;
            }
            
        }
        if (p==1)
        {
            break;
        }
        
        
    }
    if (ans == m)
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
    
    
    
    return 0;
}