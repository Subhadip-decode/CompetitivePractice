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
        string a = "";
        vector<string> res;
        for (int i = 0; i < n; i++)
        {
            a += "(";
        }
        for (int i = 0; i < n; i++)
        {
            a += ")";
        }
        int k = n;
        for (int i = 0; i < n; i++)
        {
            res.push_back(a);
            swap(a[k], a[k - 1]);
            k = k - 1;
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
    }
}