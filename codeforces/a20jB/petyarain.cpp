#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] > v[j + 1])
                break;
            span++;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[j - 1])
                break;
            span++;
        }
        res = max(res, span);
    }
    cout << res;
    return 0;
}