// E. Amazing cave

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
   ll num ;          cin >> num ;

    int last_digit = num % 10;    // find last digit to number of last digit == 4 or == 7 ===> lucky num

    // Check if the last digit is 4 or 7
    if (last_digit == 4 || last_digit == 7)
    {
        cout << "lucky" << " ";
    }
    else
    {
        cout << "unlucky" << " ";
    }

    if(num % 2 == 0 )     // even 
    {
        cout <<  "even" << endl;
    }
    else                    // odd
    {
        cout << "odd" << endl;
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
