#include<bits/stdc++.h>

using namespace std;

int main(){
    long int t;
    cin>>t;
    long long int n;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n%4 == 0)
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