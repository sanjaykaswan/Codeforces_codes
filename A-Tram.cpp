#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, a, b, max = 0;
    cin >> n;
    vector<int> av;
    vector<int> bv;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        av.push_back(a);
        bv.push_back(b);
    }
    if (bv[0] > max)
    {
        max = bv[0];
    }
    int temp = bv[0];
    for (int i = 0; i < (n - 1); i++)
    {
        temp +=  bv[i + 1] - av[i + 1];
        if (temp > max)
        {
            max = temp;
        }
    }
    cout<<max;
    return 0;
}