#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    int x = 0;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        if (s[1]=='-')
        {
            x -= 1;
        }
        else
        {
            x += 1;
        }
    }
    cout<< x;
    
    return 0;
}