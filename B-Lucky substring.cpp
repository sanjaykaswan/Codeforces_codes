#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int c4 = 0,c7 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
        {
            c4 += 1;
        }
        else if (s[i] == '7')
        {
            c7 += 1;
        }
        
    }
    if (c4 == 0 && c7 == 0 )
    {
        cout<<-1;
    }
    else if (c4 >= c7)
    {
        cout<<4;
    }
    else if (c4 < c7 )
    {
        cout<<7;
    }
    
    return 0;
}