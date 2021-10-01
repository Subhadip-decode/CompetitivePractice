#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 2)
    {
        cout << "yes\n";
        if (a[0] > a[1])
        {
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << 1 << " " << 1 << endl;
        }
    }
    else
    {
        //check peaks
        int peaks = 0, index = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0 && a[i] > a[i + 1])
                peaks++;
            else if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                peaks++;
                index = i;
            }
            if (peaks > 1)
            {
                cout << "no\n";
                break;
            }
        }
        // if (peaks == 0)
        // {
        //     cout << "yes\n"
        //          << 1 << " " << 1 << endl;
        // }
        if (peaks <= 1)
        {
            int i = index + 1;
            while (i < n && a[i] <= a[i - 1])
            {
                i++;
            }

            if (i != n && a[i] < a[index])
                cout << "no\n";
            else if (index != 0 && a[index - 1] > a[i - 1])
                cout << "no\n";
            else
            {
                cout << "yes\n"
                     << index + 1 << " " << i << endl;
            }
        }
    }
}