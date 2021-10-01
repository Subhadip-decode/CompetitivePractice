#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int val;
    cin >> val;
    int two = val / 3;
    int one = 0;
    if (val % 3 == 2)
    {
        two++;
    }
    one = val - two * 2;
    cout << one + two << endl;
    return 0;
}