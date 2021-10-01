#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int portfolio_profit_maximisation(int maxSum, vector<int> a, vector<int> b)
{
    //write your code here
    int i = 0, j = 0, res = 0;
    ll sum = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            if (sum + b[j] > maxSum)
            {
                return res;
            }
            else
            {
                sum += b[j];
                res++;
                j++;
            }
        }
        else if (b[j] > a[i])
        {
            if (sum + a[i] > maxSum)
            {
                return res;
            }
            else
            {
                sum += a[i];
                res++;
                i++;
            }
        }
        else
        {
            if (sum + b[j] > maxSum)
            {
                return res;
            }
            else
            {
                sum += b[j];
                res++;
                j++;
            }
            if (sum + a[i] > maxSum)
            {
                return res;
            }
            else
            {
                sum += a[i];
                res++;
                i++;
            }
        }
    }
    while (i < a.size())
    {
        if (sum + a[i] > maxSum)
        {
            return res;
        }
        else
        {
            sum += a[i];
            res++;
            i++;
        }
    }
    while (j < b.size())
    {
        if (sum + b[j] > maxSum)
        {
            return res;
        }
        else
        {
            sum += b[j];
            res++;
            j++;
        }
    }
    return res;
}
int main()
{
    int n, m, mxsum;
    cin >> n >> m >> mxsum;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << portfolio_profit_maximisation(mxsum, a, b) << endl;
    ;
    return 0;
}