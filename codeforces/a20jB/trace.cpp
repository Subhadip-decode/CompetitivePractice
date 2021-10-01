#include <bits/stdc++.h>
// #include <cmath>
using namespace std;
#define int long long int
double pi = 2 * acos(0.0);
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int k = 0;
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {

        res += v[i] * v[i] * (1 - i % 2 * 2);
    }
    // cout << "\n";
    res *= pi;
    cout << setprecision(10) << fixed << res;
    return 0;
}