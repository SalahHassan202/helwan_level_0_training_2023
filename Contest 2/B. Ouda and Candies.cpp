// B. Ouda and Candies

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    
    ll x , n ; 
    cin >> x >>  n;

    ll r = x % n;     // reminder

    ll total2  = r == 0 ? 0 : n - r;     // total2  ===> extra_candies

    ll total1 = x + total2 ;             // total1  ===> total_candies 
  
    cout << total1 << " " <<  total2 << endl;
    

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

