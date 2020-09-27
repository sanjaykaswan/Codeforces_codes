#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n%2 == 0)
        {
            for (int j = 0; j < (n/2); j++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else
        {
            cout<<7;
            for (int j = 1; j < (n/2); j++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}