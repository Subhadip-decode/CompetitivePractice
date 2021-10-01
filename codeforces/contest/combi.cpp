#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        int arr[] = {a, b, c};
        sort(arr, arr + 3);
        int posm = a - 1 + b - 1 + c - 1;
        if (posm < m)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            posm = arr[2] - (arr[1] + arr[0] + 1);
            if (posm > m)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}