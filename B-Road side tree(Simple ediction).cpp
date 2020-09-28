#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }int sum =h[0]+1;
    for(int i=0;i<n-1;i++){
        sum+= h[i]+h[i+1]+1-2*min(h[i],h[i+1])+1;
    }cout << sum;
}