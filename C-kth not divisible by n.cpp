#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (b % (a - 1) == 0)
        {
            cout << (b / (a - 1)) * a - 1 << endl;
        }
        else
        {
            temp = a * (b / (a - 1));
            temp += b - (a * (b / (a - 1))) + (b / (a - 1));
            cout << temp << endl;
        }
    }
    return 0;
}