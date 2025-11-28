// S. The power of shapes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll s, t, c;
    cin >> s >> t >> c;
    ll square = s * 4;
    ll triangle = t * 3;
    double circle = 2 * 3.14 * c;

    if (circle > triangle && circle > square)
        cout << "Circle " << circle << endl;
    else if (triangle > circle && triangle > square)
        cout << "Triangle " << triangle << endl;
    else
        cout << "Square " << square << endl;
}

int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}