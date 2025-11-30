// A. Salek or Unsalek

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    

    ll counterEven = 0 , counterOdd = 0 ; 

    
    
        ll size ;
        cin >> size ;

        ll  arr[size] ;

        for(int i = 0 ; i < size ; i++)
        {
            cin >> arr[i] ;
        }

        for(int i = 0 ; i < size ; i++)
        {
            if(arr[i] % 2 == 0 )
            {
                counterEven++ ;
            }
            else
            {
                counterOdd++ ;
            }
        }

       
    
        if(counterEven >= counterOdd)
        {
            cout << "SALEK" << endl;
        }
        else
        {
            cout << "UNSALEK" << endl;
        }
        counterEven = 0 ; 
        counterOdd = 0 ;

    

}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

