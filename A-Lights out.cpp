#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    vector<vector<int>> v;
    for (int i = 0; i < 3; i++)
    {
        vector<int> v1;
        for (int j = 0; j < 3; j++)
        {
            cin >> a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }
    cout<< (v[0][0] + v[0][1] + v[1][0] +1) % 2;
    cout<< (v[0][1] + v[0][0] + v[0][2] + v[1][1] +1) % 2;
    cout<< (v[0][2] + v[0][1] + v[1][2] +1) % 2 <<endl;
    cout<< (v[1][0] + v[0][0] + v[1][1] + v[2][0] +1) % 2;
    cout<< (v[1][1] + v[1][2] + v[0][1] + v[1][0] + v[2][1] + 1) % 2;
    cout<< (v[1][2] + v[0][2] + v[1][1] + v[2][2] +1) % 2 <<endl;
    cout<< (v[2][0] + v[2][1] + v[1][0] +1) % 2;
    cout<< (v[2][1] + v[2][0] + v[1][1] + v[2][2] +1) % 2;
    cout<< (v[2][2] + v[2][1] + v[1][2] +1) % 2;
    return 0;
}