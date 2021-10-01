#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    double dist = v[0];
    for (int i = 0; i < n; i++)
    {
        float t = ((float)(v[i] - v[i - 1]) / (float)2);
        if (t > dist)
            dist = t;
    }
    if (v[n - 1] != l)
    {
        float t = l - v[n - 1];
        if (t > dist)
            dist = t;
    }
    cout << fixed << setprecision(10) << dist << endl;
    return 0;
}