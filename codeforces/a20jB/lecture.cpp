#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mw;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mw[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a.size() <= mw[a].size())
            cout << a << " ";
        else
            cout << mw[a] << " ";
    }
    return 0;
}