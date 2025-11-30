// C. Kholy's Game

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    
    ll n , j  ;
    cin >> n >> j ;

    ll full_groups = j / (n - 1) ;
    ll remaining = j % (n - 1) ;

    if (remaining == 0)
    {
        cout << full_groups * n - 1 << endl;
    } 
    else 
    {
        cout << full_groups * n + remaining << endl;
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

