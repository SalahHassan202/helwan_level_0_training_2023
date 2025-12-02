// I. Bored Vasya

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    vector<ll> v;
    for (int i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        if (x % n == 0)
        {
            cnt++;
            v.push_back(i);
        }
    }

    sort(v.rbegin(), v.rend());

    cout << cnt << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
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