#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (s == t)
        cout << 0;
    else
    {
        bool vis[n] = {false};
        int curr = s - 1, steps = 0;
        while (true)
        {
            // cout << curr << " ";
            if (vis[curr])
            {
                cout << -1;
                break;
            }
            else if (curr == t - 1)
            {
                cout << steps;
                break;
            }
            vis[curr] = true;
            curr = a[curr] - 1;
            steps++;
        }
    }
    return 0;
}