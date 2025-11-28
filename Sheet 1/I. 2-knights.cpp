// I. 2-knights

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll dx = abs(x1 - x2);
    ll dy = abs(y1 - y2);

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2) || (dx == 0 && dy == 0))
        cout << "Yes";
    else
        cout << "No";
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