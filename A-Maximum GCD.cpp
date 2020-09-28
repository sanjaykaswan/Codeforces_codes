#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if (b == 0 )
    {
        return a;
    }
    else
    {
        a = b;
        b = a%b;
        return gcd(a,b);
    }
}


int main(){
    int t;
    long int n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n%2 == 0)
        {
            cout<<gcd(n,n/2)<<endl;
        }
        else
        {
            cout<<gcd(n-1,(n-1)/2)<<endl;
        }
        

    }
    
    return 0;
}       