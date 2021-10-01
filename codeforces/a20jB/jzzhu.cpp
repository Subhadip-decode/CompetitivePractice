#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int x, y, n;
    int mod = 1e9 + 7;
    cin >> x >> y >> n;

    // int k = n % 6;
    // int res = y - x;

    int res[] = {
        x - y,
        x,
        y,
        y - x,
        -1 * x,
        -1 * y,
    };
    cout << (res[n % 6] % mod + mod) % mod;
    return 0;
}