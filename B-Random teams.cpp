#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n , m;
    cin>>n>>m;
    long long int max = ((n-(m-1))*(n-m))/2;
    long long int min = 0;
    long long int r = n%m;
    min += (m-r)*(((n/m)*((n/m) - 1))/2);
    min += (r)*((((n/m)+1)*(n/m))/2);
    cout<<min<<" "<<max;
    return 0;
}