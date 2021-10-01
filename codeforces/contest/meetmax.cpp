#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back({t, i});
        }
        sort(v.begin(), v.end());
        int i = n - 2, j = n - 1;
        vector<pair<int, int>> res;
        while (i >= 0 && j >= 0)
        {
            while (v[i].first == 0 && i != j && i >= 0)
            {
                i--;
            }
            while (v[j].first == 0 && i != j && j >= 0)
            {
                j--;
            }
            if (i == j)
            {
                i--;
            }
            if (i < 0 || j < 0)
            {
                break;
            }
            int temp = min(v[i].first, v[j].first);
            if (v[i].first >= v[j].first)
            {
                v[i].first = v[i].first - v[j].first;
                v[j].first = 0;
            }
            else if (v[i].first < v[j].first)
            {
                v[j].first = v[j].first - v[i].first;
                v[i].first = 0;
            }
            while (temp--)
                res.push_back({v[i].second + 1, v[j].second + 1});
        }
        cout << res.size() << endl;
        for (i = 0; i < res.size(); i++)
        {
            cout << res[i].first << " " << res[i].second << endl;
        }
    }
    return 0;
}