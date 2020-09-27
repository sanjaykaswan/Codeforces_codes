#include<bits/stdc++.h>

using namespace std;

int main(){
    double n,a;
    double sum = 0;
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        sum += a;
    }
    double x = sum/n;
    cout<<fixed;
    cout<<setprecision(12)<<x;
    
    return 0;
}