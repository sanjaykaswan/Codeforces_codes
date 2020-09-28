#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int p;
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        p = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (s[i] == v[j])
            {
                p += 1;
                break;
            }
        }
        if (p == 0)
        {
            v.push_back(s[i]);
        }
    }

    if (v.size() % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}