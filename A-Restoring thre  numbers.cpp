#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v;
    int max = 0;
    for (int i = 0; i < 4; i++)
    {   long int a;
        cin>>a;
        v.push_back(a);
        if(v[i]>max){
            max = v[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if(max-v[i] > 0 ){
            cout<<max-v[i]<<" ";
        }
    }
    
    return 0;
}