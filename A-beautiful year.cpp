#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,p;
    cin>>n;
    int ans = n+1;
    string s;
    for (int i = 0; i < 9000; i++)
    {
        s = to_string(ans);
        p = 0; 
    
        if((s[0] == s[1]) || (s[0]==s[2]) || (s[0]==s[3]) || (s[1]==s[2]) || (s[1]==s[3]) || (s[2] == s[3]) ){
            ans += 1;
            p += 1;
        }
        if(p==0){
            cout<<ans;
            break;
        }
        
    }
    

    return 0;
}