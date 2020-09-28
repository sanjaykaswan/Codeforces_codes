#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , a;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int dif =  abs(v[0] - v[n-1]);
    int f = 1 , l = n;
    for (int i = 0; i < n-1; i++)
    {
        if (abs(v[i]-v[i+1]) < dif)
        {
            dif = abs(v[i]-v[i+1]);
            f = i+1;
            l = i+2;
        }
        
    }
    cout<<f<<" "<<l;
    return 0;
}