// A. Always Fight!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll x , y ;
    cin >> x >> y ;

    ll last_two_digit_x = x % 100 ;   
    ll last_two_digit_y = y % 100 ;
    
    ll new_number = last_two_digit_x % 10 * 10 + last_two_digit_y % 10;
    
    new_number = new_number * 5 ;
    
    if (new_number % 2 == 0)
    {
        cout << new_number << endl;
        cout << "Hossam" << endl;
    }
    else
    {
        cout << new_number << endl;
        cout << "Desouky" << endl;
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
