#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    char a;
    a = toupper(s[0]);
    s.erase(0,1);
    cout<<a;
    cout<<s;
    return 0;
}