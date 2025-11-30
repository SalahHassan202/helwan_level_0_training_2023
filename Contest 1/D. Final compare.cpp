// D. Final compare

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
       int x, y;
    cin >> x >> y;

    if (x == 1)
    {
        x = 14 ; 
    }
    if (y == 1)
    {
        y = 14;
    }

    if (x > y)
    {
        cout << "Hazem" << endl;
    }
    else if (y > x)
    {
        cout << "Wael" << endl;
    }
    else
    {
        cout << "Both" << endl;
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

