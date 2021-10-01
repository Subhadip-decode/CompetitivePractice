#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    string s;
    int count = 1;
    cin >> s;
    // sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1;)
    {
        int j = i + 1, c = 1;
        while (s[j] == s[i] && j < s.size())
        {
            c++;
            j++;
        }
        count = max(count, c);
        i = j;
    }
    cout << count;
    return 0;
}