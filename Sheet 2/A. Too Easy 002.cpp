// A. Too Easy 002

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
     ll n1 , n2 ; 
    cin >> n1 >> n2 ;
    for(int i = 1 ; i <= n2 ; i++)
    {
        if(n1 % i == 0)
        cout << i << " is a divisor of " << n1 << endl;
    }
  
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}
