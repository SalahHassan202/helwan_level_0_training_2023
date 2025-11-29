// O. Prime !

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
    if (n == 1)
        cout << "NO";
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES";
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