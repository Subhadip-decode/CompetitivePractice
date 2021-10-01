#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    vector<int> ar(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int t;
        cin >> t;
        ar[t] = t;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}