#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k,n;
    cin>>t;
    for(int i =0;i<t;i++){
        cin>>k>>n;
        if (k%n > (n/2))
        {
            cout<<((k - (k%n))+(n/2))<<endl;
        }
        else if ((k%n) <= (n/2))
        {
            cout<<(k)<<endl;
        }
        
    }
    return 0;
}