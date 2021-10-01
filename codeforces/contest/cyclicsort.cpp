#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<vector<int>> res;
        for (int i = n - 1; i >= 0; i--)
        {
            int mx = a[i], index = i;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] > mx)
                {
                    mx = a[j];
                    index = j;
                }
            }
            if (index != i)
            {
                vector<int> res1;
                res1.push_back(index + 1);
                res1.push_back(i + 1);
                res1.push_back(1);
                res.push_back(res1);
                for (int j = index; j < i; j++)
                {
                    swap(a[j], a[j + 1]);
                }
                a[i] = mx;
            }
        }
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
        }
    }
}