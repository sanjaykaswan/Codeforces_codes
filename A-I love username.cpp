#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int min = v[0];
    int max = v[0], count = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            count += 1;
        }
        else if (v[i] > max)
        {
            max = v[i];
            count += 1;
        }
    }
    cout<<count;
    return 0;
}