#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool isprime(int x)
{
    if (x <= 1)
        return false;
    if (x <= 3)
        return true;

    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int k = sqrt(v[i]);
        // cout<<
        if (k * k == v[i])
        {
            if (isprime(k))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}