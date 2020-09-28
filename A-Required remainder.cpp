#include<bits/stdc++.h>

using namespace std;

int main(){
    long int t;
    cin>>t;
    long long int x , y , n;
    for (int i = 0; i < t; i++)
    {
        cin>>x>>y>>n;
        if (n%x > y)
        {
            cout<<(n - (n%x) + y)<<endl;
        }
        else if (n%x == y)
        {
            cout<<n<<endl;
        }
        else
        {
            n = n - (n % x);
            n = n - x + y;
            cout<<n<<endl;
        }
        
    }
    
    return 0;
}