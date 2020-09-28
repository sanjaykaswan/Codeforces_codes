#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    sort(s.begin(), s.end());
    char c = s[0];
    int counts = 1;
    vector<char> v;
    v.push_back(s[0]);
    vector<int> count;
    string ans = "";
    if (k == 1)
    {
        cout << s;
    }
    else
    {

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != c)
            {
                v.push_back(s[i]);
                c = s[i];
                count.push_back(counts);
                counts = 1;
            }
            else
            {
                counts += 1;
            }
            if (i == s.length()-1)
            {
                count.push_back(counts);
            }
        }
        // for (int i = 0; i < count.size(); i++)
        // {
        //     cout<< v[i] << "   "<<count[i]<<endl;
        // }
        
        int p = 0;
        for (int i = 0; i < count.size(); i++)
        {
            if (count[i]%k != 0)
            {
                cout<<-1;

                p = 1;
                break;
            }
            
        }
        if (p == 0)
        {
            for (int i = 0; i < count.size(); i++)
            {
                for (int j = 0; j < count[i]/k; j++)
                {
                    ans += v[i];
                }
                
            }
            for (int i = 0; i < k; i++)
            {
                cout<<ans;
            }
            
            
        }
        
        
    }
    return 0;
}