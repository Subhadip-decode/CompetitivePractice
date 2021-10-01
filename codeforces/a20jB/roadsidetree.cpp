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
    int tm = v[0] + 1, curh = v[0];
    for (int i = 1; i < n; i++)
    {
        //for vertical traversal
        if (v[i] < v[i - 1])
        {
            tm += curh - v[i];
            curh = v[i];
        }
        else
        {
            tm += v[i] - curh;
            curh = v[i];
        }
        //for jump and eat
        tm += 2;
    }
    cout << tm << endl;
    return 0;
}