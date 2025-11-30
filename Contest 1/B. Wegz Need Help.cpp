// B. Wegz Need Help

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b, x, y ;
    cin >> a >> b >> x >> y ;

    
    ll distance1 = abs(a - b);

    ll distance2 = abs(a - x) + abs(b - y);
    ll distance3 = abs(a - y) + abs(b - x);

    ll min_distance = min({distance1, distance2, distance3});

    cout << min_distance << endl;


   
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
