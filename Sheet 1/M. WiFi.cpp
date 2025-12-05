// M. WiFi

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    ll x1, y1, R1, x2, y2, R2 ;
    cin >> x1 >> y1 >> R1 ;
    cin >> x2 >> y2 >> R2 ;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) ;
    
    if (distance <= R1 + R2 )
    {
        cout << "yes" << endl;
    } else
    {
        cout << "no" << endl;
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
