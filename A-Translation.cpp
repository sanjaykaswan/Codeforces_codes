#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[b.length()-(i+1)])
        {
            cout<<"NO";
            break;
        }
        
        if (i==(a.length()-1) && a[i] == b[b.length()-(i+1)])
        {
            cout<<"YES";
        }
        
        
    }
    
    return 0;
}