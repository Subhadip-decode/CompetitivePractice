#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    vector<int> a;
    int k = n;
    while (n != 0)
    {
        a.push_back(n % 10);
        n = n / 10;
    }
    int index = -1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            if (index == -1)
            {
                index = i;
            }
            else if (a[i] < a[0])
                index = i;
        }
    }
    if (index != -1)
    {
        swap(a[index], a[0]);
        for (int i = a.size() - 1; i >= 0; i--)
            n = n * 10 + a[i];
        cout << n << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}