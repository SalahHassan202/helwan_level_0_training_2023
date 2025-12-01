// D. Estimation

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
        {
            ll x = n[i] - '0';
            if (x % 4 == 0)
                ans++;
        }
        else
        {
            ll x = (n[i - 1] - '0') * 10 + (n[i] - '0');
            if (x % 4 == 0)
                ans++;
        }
    }

    cout << ans << endl;
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