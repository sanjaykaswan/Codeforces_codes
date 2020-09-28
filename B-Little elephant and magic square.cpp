#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v;
    int k;
    int sum = 0;
    for ( int i = 0; i < 9; i++)
    {
        cin>>k;
        v.push_back(k);
        sum += k;
    }
    sum = sum/2;
    v[0] = sum - v[1] - v[2];
    v[4] = sum - v[3] - v[5];
    v[8] = sum - v[6] - v[7];
    for (int i = 0; i < 3; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 3; i < 6; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 6; i < 9; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}