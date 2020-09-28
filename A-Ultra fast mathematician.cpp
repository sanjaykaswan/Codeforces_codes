#include<bits/stdc++.h>

using namespace std;

int main(){
    string ns,ms;
    cin>>ns;
    cin>>ms;
    
    for (int i = 0; i < ns.length(); i++)
    {
        if (ns[i] == ms[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
    }
    
    return 0;
}