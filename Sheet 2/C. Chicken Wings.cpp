// C. Chicken Wings

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll sum = 0, cnt = 0;
    for (int i = l; i <= r; i++)
    {
        if (isPrime(i))
        {
            cnt++;
            sum += i;
        }
    }

    cout << sum << " " << cnt << endl;
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