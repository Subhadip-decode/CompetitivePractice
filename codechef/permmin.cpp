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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (v.size() == 1)
        {
            cout << v[0] << endl;
            continue;
        }
        deque<int> res;
        res.push_back(v[0]);
        if (res.front() >= v[1])
        {
            res.push_front(v[1]);
        }
        else
        {
            res.push_back(v[1]);
        }

        for (int i = 2; i < n; i++)
        {
            if (v[i] >= res.back())
            {
                res.push_back(v[i]);
            }
            else if (v[i] > res.front())
            {
                res.push_front(v[i]);
                t++;
            }
            else if (v[i] <= res.front())
            {
                res.push_front(v[i]);
            }
        }
        deque<int>::iterator it;
        for (it = res.begin(); it != res.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}