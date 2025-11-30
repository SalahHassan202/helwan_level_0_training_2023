// G. Maria and Ali

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll num ; 
    cin >> num ;

    if(num % 2 == 0 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

