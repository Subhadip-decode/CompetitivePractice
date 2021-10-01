#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int mov = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            mov += ar[i - 1] - ar[i];
            ar[i] = ar[i - 1];
        }
        // cout << ar[i - 1] << " ";
    }
    cout << mov;
    return 0;
}