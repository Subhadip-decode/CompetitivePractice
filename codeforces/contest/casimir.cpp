#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'B')
                b++;
            else
                c++;
        }
        if (b == 0)
        {
            cout << "NO" << endl;
        }
        else if (a == 0)
        {
            if (b == c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (c == 0)
        {
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (a + c == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}