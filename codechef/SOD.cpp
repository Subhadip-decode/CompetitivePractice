#include <bits/stdc++.h>
using namespace std;
#define int long long int
void addit(int arr[], int &i, int &sum)
{
    int carry = 0, j;
    for (j = 0; j < i; j++)
    {
        sum -= arr[j];
        arr[j] = (arr[j] + 1 + carry) % 10;
        sum += arr[j];
        carry = (arr[j] + 1 + carry) / 10;
        if (carry == 0)
            break;
    }
    if (j == i && carry != 0)
    {
        arr[j] = carry;
        j++;
        i = j;
    }
}
int32_t main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int diff = r - l;
        int arr[1000000000000000000] = {0}, i = 0;
        while (l != 0)
        {
            arr[i] = l % 10;
            i++;
            l = l / 10;
        }
        int sm = accumulate(arr, arr + i, 0);
        int c = sm % 3 == 0 ? 1 : 0;
        for (int j = 1; j <= diff; j++)
        {
            sm = addit(arr, i, sm);
            if (sm % 3 == 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
