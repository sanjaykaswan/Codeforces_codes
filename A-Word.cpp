#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) < 95)
        {
            u += 1;
        }
        else
        {
            l += 1;
        }
    }
    char x;
    if (u <= l )
    {
        for (int i = 0; i < s.length(); i++){
            x = tolower(s[i]);
            cout<<x;
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++){
            x = toupper(s[i]);
            cout<<x;
        }
    }
    
    
    return 0;
}