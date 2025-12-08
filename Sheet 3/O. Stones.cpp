// O. Stones

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll R = 0, B = 0, G = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            R++;
        else if (s[i] == 'G')
            G++;
        else
            B++;
    }

    cout << "Red stones = " << R << endl;
    cout << "Blue stones = " << B << endl;
    cout << "Green stones = " << G << endl;
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