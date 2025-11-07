// B. The Division

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

int maxScore(ll num)
{
    long long score = 0 ;
    for(ll i = 2 ; i * i <= num ; i++)
    {
        if(num % i == 0)
        {
            while(num % i == 0)
            {
                num /= i ; 
                score++ ; 
            }

        }
    }

    if(num > 1)  score++;

    return score ;
}

void solve()
{
    ll num ;     cin >> num ;
    cout << maxScore(num) << endl;
  
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }

    return 0;
}
