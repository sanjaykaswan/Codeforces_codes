#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        long long int c = 0;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            for (int i = 0; i < pow(10, 18); i++)
            {
                if (a == b)
                {
                    if (c % 3 == 0)
                    {
                        cout << c / 3 << endl;
                        break;
                    }
                    else if ((c % 3) % 2 == 0)
                    {
                        cout << (c / 3) + ((c % 3) / 2) << endl;
                        break;
                    }
                    else
                    {
                        cout << (c / 3) + ((c % 3) / 2) + 1 << endl;
                        break;
                    }
                }
                else if (a > b && a%2 != 0)
                {
                    cout<<-1<<endl;
                    break;
                }
                
                else if (a > b)
                {
                    a = a / 2;
                    c += 1;
                }
                else
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < pow(10, 18); i++)
            {
                if (a == b)
                {
                    if (c % 3 == 0)
                    {
                        cout << c / 3 << endl;
                        break;
                    }
                    else if ((c % 3) % 2 == 0)
                    {
                        cout << (c / 3) + ((c % 3) / 2) << endl;
                        break;
                    }
                    else
                    {
                        cout << (c / 3) + ((c % 3) / 2) + 1 << endl;
                        break;
                    }
                }
                else if (a < b)
                {
                    a = a * 2;
                    c += 1;
                }
                else
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}