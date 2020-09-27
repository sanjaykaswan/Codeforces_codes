#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,n,m;
    cin>>q;
    for(int i =0;i<q;i++){
        cin >> n >> m;
        if(n==1){
            cout<<0<<endl;
        }
        else if (n==2)
        {
            cout<< m << endl;
        }
        else
        {
            cout<< m*2<<endl;
        } 
    }
    return 0;
}