#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    string t = "abcd", res;
    int n;
    cin >> n;
    int k = n / 4;
    while (k--)
    {
        res += t;
    }
    k = n % 4;
    int i = 0;
    while (k--)
    {
        res += t[i];
        i++;
    }
    cout << res;
    return 0;
}