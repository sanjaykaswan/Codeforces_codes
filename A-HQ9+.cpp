#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == 'H') ||(s[i] == 'Q') ||(s[i] == '9') )
        {
            cout<<"YES";
            p += 1;
            break;
        }
        
    }
    if (p == 0)
    {
        cout<<"NO";
    }
    
    return 0;
}