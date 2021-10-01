#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rad, x1, y1, x2, y2;
    cin >> rad >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt(pow(y2 - y1, 2.0) + pow(x2 - x1, 2.0));
    // cout << dist << endl;
    cout << (int)(ceil)(dist / rad / 2) << endl;
    return 0;
}