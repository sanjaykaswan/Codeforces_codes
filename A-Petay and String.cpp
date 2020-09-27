#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    char la,lb;
    cin>>a;
    cin>>b;
    for (int i = 0; i < a.length(); i++)
    {
        la = tolower(a[i]);
        lb = tolower(b[i]);
        if (int(la)>int(lb))
        {
            cout<<1;
            break;
        }
        else if (int(la)<int(lb))
        {
            cout<<-1;
            break;
        }
        if (i==(a.length()) - 1 && int(la)==int(lb))
        {
            cout<<0;
            break;
        }
        
        
        
        
    }
    
    
    
    
    return 0;
}