#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    string s, r;
    cin >> s >> r;
    if (s.size() < r.size())
    {
        cout << "need tree";
    }
    else if (s.size() == r.size())
    {
        sort(s.begin(), s.end());
        sort(r.begin(), r.end());
        if (s == r)
        {
            cout << "array";
        }
        else
        {
            cout << "need tree";
        }
    }
    else
    {
        int i, j, flag = 0;
        for (i = 0, j = 0; i < s.size() && j < r.size(); i++)
        {
            if (s[i] == r[j])
                j++;
        }
        if (j == r.size())
        {
            cout << "automaton";
        }
        else
        {
            sort(s.begin(), s.end());
            sort(r.begin(), r.end());
            for (i = 0, j = 0; i < s.size() && j < r.size(); i++)
            {
                if (s[i] == r[j])
                    j++;
            }
            if (j == r.size())
            {
                cout << "both";
            }
            else
            {
                cout << "need tree";
            }
        }
    }
}
