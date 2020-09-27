#include<bits/stdc++.h>

using namespace std;

int main(){
    int e,a = 0,b = 0;
    vector<vector<int>>v;
    for (int i = 0; i < 5 ; i++)
    {
        vector<int>v1;
        for (int j = 0; j < 5; j++)
        {
            cin>>e;
            if(e == 1){
                a += i;
                b += j;
            }
            v1.push_back(e);
        }
        v.push_back(v1);
    }
    cout<<abs(2-a) +abs(2-b);
    return 0;
}