// A. The Lost Number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int n[10]; 
    int x;            
    bool found = false;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }
    
    cin >> x;
    
    for (int i = 0; i < 10; i++)
    {
        if (n[i] == x)
        {
            found = true;  
            break;     
        }
    }
    
    if (found)  cout << "Found" << endl;
    else  cout << "Not Found" << endl;
  
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
