#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool tobinary(int x, int k, int n)
{
    int k1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (x >> i & 1)
            k1++;
        if (k1 > k)
            return false;
        }
    return true;
}
int32_t main()
{
    int n, m, k, frnd = 0;
    cin >> n >> m >> k;
    // cout << (5 & 2);
    vector<int> sol(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> sol[i];
    for (int i = 0; i < m; i++)
    {
        unsigned int x = ~(sol[i] & sol[m]);
        // cout << x << " ";
        if (tobinary(x, k, n))
            frnd++;
    }
    cout << frnd << endl;
    return 0;
}