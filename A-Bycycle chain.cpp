#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, ne, m, me;
    cin >> n;
    vector<int> vn;
    vector<int> vm;
    for (int i = 0; i < n; i++)
    {
        cin >> ne;
        vn.push_back(ne);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> me;
        vm.push_back(me);
    }
    int maxr = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (vm[j] % vn[i] == 0 && vm[j]/vn[i] > maxr)
           {
               maxr = vm[j] / vn[i] ;
               count = 1;
           }
            else if (vm[j] % vn[i] == 0 && vm[j]/vn[i] == maxr)
            {
                count += 1;
            }
            
        }
        
    }
    cout<<count;
    
    return 0;
}