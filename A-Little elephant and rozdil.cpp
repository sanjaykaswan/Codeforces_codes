#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, ans = 0, count = 0;
    cin >> n;
    long long int a, min = pow(10, 10);
    for (int i = 0; i < n; i++)

    {
        cin >> a;
        if (a < min)
        {
            min = a;
            ans = i + 1;
            count = 1;
        }
        else if (a == min)
        {
            count += 1;
        }
        
    }
    if (count == 1)
    {
        cout<<ans;
    }
    else
    {
        cout<<"Still Rozdil";
    }
    
    
    return 0;
}