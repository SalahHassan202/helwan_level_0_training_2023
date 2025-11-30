// F. Logic Case

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a , b  ;
    cin>> a >> b ;

    if (a > b)
    {
        swap(a, b);
    }

   ll sum = 0 ;
   ll m = a + 1 ;
   ll n = b - 1 ;



    if(m <= n)
    {
        sum = (n * (n + 1)) / 2 - (m * (m - 1)) / 2 ; 
    }

    cout <<  sum << endl;
    

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

