#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink_toast = (k*l)/nl;
    int slices_toast = (c*d)/1;
    int salt_toast = p/np;
    int min = 1001;
    if (drink_toast<min)
    {
        min = drink_toast;
    }
    if (slices_toast<min)
    {
        min = slices_toast;
    }
    if (salt_toast<min)
    {
        min = salt_toast;
    }
    
    cout<<min/n;
    return 0;
}