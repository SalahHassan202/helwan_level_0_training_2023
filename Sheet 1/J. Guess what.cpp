// J. Guess what?

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    double a , b , c ; 
    cin >> a >> b >> c ; 

    ll result1 = (a*b) / c ; 
    double result2 = (a*b) / c ; 

    double test = result2 - result1 ; 

    if(test > 0 )
    {
      cout << "double" << endl;
    }
    else 
    {
        if (result2 > 2147483647)    // int Range: [−2147483648,2147483647]
        {
          cout << "long long" << endl;
        }
        else
        {
          cout << "int" << endl;
        }
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
