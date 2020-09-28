#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        cout<<s[0];
        int k = 1;
        for (int j = 0; j < s.length(); j++)
        {
            if (k > s.length()-2)
            {
                break;
            }
            else if (s[k] == s[k+1])
            {
               cout<<s[k];
                k += 2;
            }
            else
            {
                k += 1;
            }
            
        }
        cout<<s[s.length()-1];
        cout<<endl;
    }
    
    return 0;
}