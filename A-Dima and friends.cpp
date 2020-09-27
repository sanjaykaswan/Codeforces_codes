#include<bits/stdc++.h>

using namespace std;

int main(){
    int f,x,sum = 0,ans = 0;
    cin>>f;
    for (int i = 0; i < f; i++)
    {
        cin>>x;
        sum += x;
    }
    for (int i = 1; i < 6; i++)
    {
        if ((sum + i)%(f+1) != 1){
            ans += 1;
        }
    }
    
    cout<<ans;
    
    return 0;
}