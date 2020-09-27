#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    for (int i = 0; i < ((n * 2) + 2); i++)
    {
        int a = 0;
        for (int k = 0; k < ((n * 2) + 1 - r); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < r; j++)
        {

            if (j < r / 2)
            {
                cout << a << " ";
                a += 1;
            }
            else if (j >= r/2 && j != r-1)
            {
                cout << a << " ";
                a -= 1;
            }
            else
            {
                cout<<0;
            }
            

            
            
        }
        cout << endl;
        if (i < n)
        {
            r += 2;
        }
        else
        {
            r -= 2;
        }
    }

    return 0;
}