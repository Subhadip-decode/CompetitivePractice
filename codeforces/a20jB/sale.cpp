#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int res = 0, i = 0;
    while (m-- && v[i] < 0)
    {
        res -= v[i];
        i++;
    }
    cout << res;
    return 0;
}