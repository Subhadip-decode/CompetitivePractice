#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    vector<vector<int>> v;
    vector<int> vsum;
    for (int i = 0; i < 3; i++)
    {
        vector<int> t(3);
        int s = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> t[j];
            if (i != j)
                s += t[j];
        }
        v.push_back(t);
        vsum.push_back(s);
    }

    int x, y, z;
    //x+y=s[2]
    //x+z=s[1]
    //y+z=s[0]
    //x-y=s[1]-s[0]
    v[0][0] = (vsum[2] + vsum[1] - vsum[0]) / 2;
    v[1][1] = (vsum[2] - vsum[1] + vsum[0]) / 2;
    v[2][2] = (vsum[0] - vsum[2] + vsum[1]) / 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}