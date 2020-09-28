#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    char now = s[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == now){
            ans += 1;
        }
        else
        {
            now = s[i];
        }
        
    }
    cout<<ans;
    return 0;
}