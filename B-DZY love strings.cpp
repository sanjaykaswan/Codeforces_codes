#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,alphabets = "abcdefghijklmnopqrstuvwxyz";
    int k, max = 0;
    long int ans = 0;
    cin >> s;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < 26; i++)
    {
        int k;
        cin >> k;
        if (k > max)
        {
            max = k;
        }
        v.push_back(k);
    }
    for (int i = s.length() + 1; i < (s.length() + k + 1); i++)
    {
        ans += i * max;
    }
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == alphabets[j])
            {
                ans += (i + 1) * (v[j]);
                break;
            }
        }
    }
    cout << ans;
    return 0;
}