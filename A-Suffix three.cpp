#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if(s[s.length()-1] == 'o'){
            cout<<"FILIPINO"<<endl;
        }
        else if (s[s.length()-1] == 'u')
        {
            cout<<"JAPANESE"<<endl;
        }
        else if (s[s.length()-1] == 'a')
        {
            cout<<"KOREAN"<<endl;
        }
        // "FILIPINO", "JAPANESE", or "KOREAN
    }
    
    return 0;
}