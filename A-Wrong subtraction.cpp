#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    int k;
    cin>>n>>k;
    for (int i = 0; i < k; i++)
    {
        string temp = to_string(n);
        // cout<<temp[temp.length()-1]<<endl;
        if(temp[temp.length()-1] == '0'){
            n = n/10;
        }
        else{
            n = n-1; 
        }
    }
    cout<<n;
    
    return 0;
}