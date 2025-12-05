// C. KG2

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    ll num , sum = 0  ;
    
    cin >> num  ;

   for(int i = 1 ; i <= num ; i++)
   {
        sum+= i ;        // sum = sum + i 
   }

   cout << sum << endl; 
 
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
