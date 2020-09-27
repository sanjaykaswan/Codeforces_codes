#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n, cnt, tmp_cnt;
    cin >> tc;
    while (tc--)
    {
        cnt = tmp_cnt = 0;
        cin >> n;
        char stu_row[n];
        cin >> stu_row;
        for (int i = 0; i < strlen(stu_row); i++)
        {
            if (stu_row[i] == 'A')
            {
                for (int j = i + 1; j <= strlen(stu_row); j++)
                {
                    if (stu_row[j] == 'P')
                        ++tmp_cnt;
                    else if (stu_row[j] == 'A')
                    {
                        break;
                    }
                }
                if (tmp_cnt > cnt)
                {
                    cnt = tmp_cnt;
                }
                tmp_cnt = 0;
            }
        }
        cout << cnt << endl;
    }
}