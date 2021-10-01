#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<int> work(m);
    for (int i = 0; i < m; i++)
        cin >> work[i];
    int cur = 1, steps = 0;
    for (int i = 0; i < m; i++)
    {
        if (work[i] > cur)
        {
            steps += work[i] - cur;
            cur = work[i];
        }
        else if (work[i] < cur)
        {
            steps += (n - cur) + work[i];
            cur = work[i];
        }
    }
    cout << steps << endl;
    return 0;
}