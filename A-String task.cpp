#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char a;
    int p = 0;
    for (int i = 0; i < s.length(); i++)
    {
        a = tolower(s[i]);
        if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u') || (a == 'y'))
        {
            p += 1;
        }
        else
        {
            cout << "." << a;
        }
    }

    return 0;
}