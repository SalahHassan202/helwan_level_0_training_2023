// E. Ramadan in Berland

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll sumR = (r * (r + 1)) / 2;
    ll sumL = ((l - 1) * l) / 2;

    ll ans = sumR - sumL;
    cout << ans << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}