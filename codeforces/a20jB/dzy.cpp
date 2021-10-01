#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<int> val(26);
    int x = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        cin >> val[i];
        x = max(x, val[i]);
    }
    int res = 0, flag = 0, j = 1;
    for (int i = 0; i < s.size(); i++)
    {
        // if (val[s[i] - 'a'] >= x && flag == 0)
        // {
        //     while (k--)
        //     {
        //         res += x * j;
        //         // cout << res << " ";
        //         j++;
        //     }
        //     res += val[s[i] - 'a'] * j;
        //     j++;
        //     flag = 1;
        // }
        // else
        // {
        res += val[s[i] - 'a'] * j;
        j++;
        // }
        // cout << res << " ";
    }
    // if (flag == 0)
    // {
    while (k--)
    {
        res += x * j;
        // cout << res << " ";
        j++;
    }
    cout << res << endl;
    // }
    // else
    // {
    // cout << res << endl;
    // }
    return 0;
}