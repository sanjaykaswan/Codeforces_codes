#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            if ((a-b)%10 == 0)
            {
                cout<<(a-b)/10<<endl;
            }
            else
            {
                cout<<((a-b)/10) + 1<<endl;
            }
        }
        else
        {
            if ((b-a)%10 == 0)
            {
                cout<<(b-a)/10<<endl;
            }
            else
            {
                cout<<((b-a)/10) + 1<<endl;
            }
            
            
            
        }
    }

    return 0;
}