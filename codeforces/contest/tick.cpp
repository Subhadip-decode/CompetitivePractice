#include <bits/stdc++.h>
using namespace std;
#define int long long int
void markit(vector<vector<char>> &v, vector<vector<int>> ch)
{
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<char>> v;
        vector<vector<int>> check;
        for (int i = 0; i < n; i++)
        {
            vector<char> temp(m);
            vector<int> ch(m);
            for (int j = 0; j < m; j++)
            {
                cin >> temp[j];
                if (temp[j] == '*')
                    ch[j] = 1;
                else
                    ch[j] = 0;
            }
            v.push_back(temp);
            check.push_back(ch);
        }
        for (int i = k; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (check[i][j] != 0)
                {
                    markit(v, check);
                }
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check[i][j] == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}