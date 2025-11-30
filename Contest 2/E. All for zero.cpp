// E. All for zero

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll cnt = 0;
        while (x > 0)
        {
            x /= 2;
            cnt++;
        }
        ans += cnt;
    }

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