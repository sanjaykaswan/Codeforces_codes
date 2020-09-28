#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            one += 1;
        }
        else if (s[i] == '2')
        {
            two += 1;
        }
        else if (s[i] == '3')
        {
            three += 1;
        }
    }
    vector<int>v;
    for (int i = 0; i < one; i++)
    {
        v.push_back(1);
    }
    for (int i = 0; i < two; i++)
    {
        v.push_back(2);
    }
    for (int i = 0; i < three; i++)
    {
        v.push_back(3);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        if (i<(v.size()-1) )
        {
            cout<<"+";
        }
        
    }
    
    return 0;
}