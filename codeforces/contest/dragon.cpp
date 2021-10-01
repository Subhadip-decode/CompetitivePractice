#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m;
    cin >> n;
    vector<int> army(n);
    for (int i = 0; i < n; i++)
        cin >> army[i];
    sort(army.begin(), army.end(), greater<int>());
    int power = accumulate(army.begin(), army.end(), 0);
    // for (int i = 0; i < n; i++)
    //     cout << army[i] << " ";
    // cout << endl;
    cin >> m;
    vector<vector<int>> dragon(m);
    for (int j = 0; j < m; j++)
    {
        int a, d;
        cin >> a >> d;
        dragon[j].push_back(a);
        dragon[j].push_back(d);
    }

    for (int i = 0; i < m; i++)
    {
        int l = n - 1, r = 0, coins = ((dragon[i][0] - army[0]) > 0 ? (dragon[i][0] - army[0]) : 0) + ((power - army[0]) > 0 ? (power - army[0]) : 0);

        cout << coins << endl;
    }

    return 0;
}