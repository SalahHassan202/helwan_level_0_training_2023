// H. Almost rectangle

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
  ll a  , b , c , d ;
  cin >> a >> b >> c >> d ;

  ll x , y ; 
  x = a - c ; 
  y = b - d ; 

float area = (a * b) - (0.5 * x * y) ; 
cout << fixed << setprecision(6)  << area << endl ;

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
