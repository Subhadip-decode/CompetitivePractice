#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool cmp(vector<int> a, vector<int> b)
{
    return a[0] > b[0];
}
int32_t main()
{
    int t;
    cin >> t;
    int p = 1;
    while (p <= t)
    {
        int d, n, k;
        cin >> d >> n >> k;
        vector<vector<int>> rate(n);
        for (int i = 0; i < n; i++)
        {
            int h, s, e;
            cin >> h >> s >> e;
            rate[i].push_back(h);
            rate[i].push_back(s);
            rate[i].push_back(e);
        }
        sort(rate.begin(), rate.end(), cmp);
        vector<int> res(d + 1, 0);
        for (int i = 0, j = 0; i < n && j < k; i++, j++)
        {
            if (j < k)
            {
                res[rate[i][1]] += rate[i][0];
                if (rate[i][2] + 1 > d)
                    continue;
                res[rate[i][2] + 1] -= rate[i][0];
            }
            else
            {
                res[rate[i][1]] -= rate[i][0];
                if (rate[i][2] + 1 > d)
                    continue;
                res[rate[i][2] + 1] += rate[i][0];
            }
        }
        int mx = res[0];
        for (int i = 1; i < res.size(); i++)
        {
            res[i] += res[i - 1];
            mx = max(res[i], mx);
        }
        cout << "case #" << p << ": " << mx << endl;
        p++;
    }
    return 0;
}