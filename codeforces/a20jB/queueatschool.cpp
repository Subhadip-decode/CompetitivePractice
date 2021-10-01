#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, t;
    cin >> n >> t;
    string line;
    cin >> line;
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        for (int i = 0; i < n - 1;)
        {
            if (line[i] == 'B' && line[i + 1] == 'G')
            {
                swap(line[i], line[i + 1]);
                flag = 1;
                i += 2;
            }
            else
            {
                i += 1;
            }
        }
        if (flag == 0)
            break;
    }
    cout << line << endl;
    return 0;
}