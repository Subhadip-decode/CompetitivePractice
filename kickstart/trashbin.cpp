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
        string s;
        cin >> s;
        vector<int> left(n), right(n);
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l = i;
            }
            if (s[n - i - 1] == '1')
            {
                r = n - i - 1;
            }
            left[i] = l;
            right[n - i - 1] = r;
        }
        int sm = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                continue;
            if (left[i] == -1 && right[i] == -1)
                continue;
            else if (left[i] == -1)
                sm += abs(right[i] - i);
            else if (right[i] == -1)
                sm += abs(left[i] - i);
            else
                sm += min(abs(left[i] - i), abs(right[i] - i));
        }
        cout << sm << endl;
    }
    return 0;
}