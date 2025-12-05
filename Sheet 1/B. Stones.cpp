// B. Stones

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
   ll num_of_stones ;
    
    cin >> num_of_stones  ;

    // if(num_of_stones == 1)
    // {
    //     cout << 1 << endl; 
    // }
    if(num_of_stones == 1)
    {
        cout << 1 << endl;
    }
    else    // num_of_stones >= 2
    {
        cout << 2 << endl;
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
