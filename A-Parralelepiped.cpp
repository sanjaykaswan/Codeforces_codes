#include<bits/stdc++.h>

using namespace std;

int main(){
    long int ax,ay,az;
    cin>>ax>>ay>>az;
    int a = sqrt((ax*ay)/az);
    int b = sqrt((ay*az)/ax);
    int c = sqrt((ax*az)/ay);
    cout<<(a+b+c)*4;
    return 0;
}