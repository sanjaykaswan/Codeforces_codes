#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c,ans,count;
    ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        cin>>a>>b>>c;
        if(a==1){
            count += 1;
        }
        if(b==1){
            count += 1;
        }
        if(c==1){
            count += 1;
        }
        if(count>1){
            ans += 1;
        }
    }
    cout<<ans;
    return 0;
}