// J. Good Subsequence

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    ll i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }

    if (j == b.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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