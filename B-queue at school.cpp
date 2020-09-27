#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        int k = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[k] == 'B' && s[k + 1] == 'G')
            {
                s[k] = 'G';
                s[k + 1] = 'B';
                k += 2;
            }
            else
            {
                k += 1;
            }
            
        }
        
    }
    cout << s;
    return 0;
}