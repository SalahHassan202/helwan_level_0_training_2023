// K. The Best

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    ll a , b , c , d ; 
    cin >> a >> b >> c >> d ;

    if (a < b && a < c && a < d)
    {
        cout << "Amr" << endl;
    }
    else if (b < a && b < c && b < d)
    {
        cout << "Waleed" << endl;
    }
    else if (c < a && c < b && c < d)
    {
        cout << "Mustafa" << endl;
    }
    else if (d < a && d < b && d < c)
    {
        cout << "Youssef" << endl;
    }
    else
    {
        cout << "We are the best" << endl;
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

}
