#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n = 0;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[n] == '.')
        {
            v.push_back(0);
            if(n == (s.length()-1)){
                break;
            }else{
                n += 1;
            }
        }
        else if (s[n] == '-')
        {
            if (s[n + 1] == '.')
            {
                v.push_back(1);
                if(n == (s.length()-2)){
                    break;
                }
                else{
                    n += 2;
                }
            }
            else if (s[n+1] == '-')
            {
                v.push_back(2);
                if(n == (s.length()-2)){
                    break;
                }
                else{
                    n += 2;
                }
            }
            
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    

    return 0;
}