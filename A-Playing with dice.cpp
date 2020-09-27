#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,aw,bw,wd;
    cin>>a>>b;
    wd = 0;
    aw = 0;
    bw = 0;
    for (int i = 1; i < 7; i++)
    {
        if(abs(a-i)>abs(b-i)){
            bw += 1;
        }
        else if(abs(a-i)<abs(b-i)){
            aw += 1;
        }
        else if(abs(a-i)==abs(b-i)){
            wd += 1;
        }
    }
    cout<<aw<<" "<<wd<<" "<<bw;
    
    return 0;
}