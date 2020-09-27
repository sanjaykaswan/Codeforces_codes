#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sec = n;
    int ans = 0;
    for (int i = 2; i < n+1; i++)
    {
        n -= i;
        if(n==0){
            break;
        }
        else if (n%i==0)
        {
            ans += 1;
        }
        // cout<<ans<<endl;
        n = sec;
    }
    cout<<ans+1;
    return 0;
}