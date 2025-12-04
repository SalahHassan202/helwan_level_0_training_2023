// C. Flag

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
    vector<string> flag(n);

    for (int i = 0; i < n; i++)
    {
        cin >> flag[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (flag[i][j] != flag[i][0])
            {
                cout << "NO";
                return;
            }
        }
        if (i > 0 && flag[i][0] == flag[i - 1][0])
        {
            cout << "NO";
            return;
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