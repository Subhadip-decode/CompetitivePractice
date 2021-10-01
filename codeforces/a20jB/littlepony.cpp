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
    int flag = 0, dips = 0;
    int index = n - 1, i = n - 1;
    // 7 9 1 2 3 4
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            index = i;
            dips++;
        }
        if (dips > 1)
        {
            flag = 1;
            cout << -1 << endl;
            break;
        }
    }
    if (flag == 0 && v[0] < v[n - 1])
    {
        cout << -1 << endl;
        flag = 1;
    }
    else
    {
        if (dips == 0)
            cout << 0 << endl;
        else
            cout << n - index - 1 << endl;
    }
    return 0;
}