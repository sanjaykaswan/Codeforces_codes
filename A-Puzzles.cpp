#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m;
    vector<int>v;
    for (int i = 0; i < m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin() , v.end());
    int min =2000 ;
    for ( int i = 0; i < m-n+1; i++)
    {
        if(v[i+n-1] - v[i]<min){
            min = v[i+n-1] - v[i];
        }
    }
    cout<<min;
    return 0;
}
 