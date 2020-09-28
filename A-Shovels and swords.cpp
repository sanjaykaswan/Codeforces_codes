#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        int maxm=max(a,b);
        int minm=min(a,b);
        if((a!=0)&&(b!=0)){
            if(minm>=(maxm/2)){
                cout << (a+b)/3 << endl;
            }else{
                cout << minm << endl;
            }
        }else{
            cout << 0 << endl;
        }
    }
}