// R. The Maze

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    ll x1 , y1  , x2 , y2 , x3 , y3 , x4 , y4; 
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4; 
    
    ll distance1 = pow((x2-x1), 2 ) + pow ((y2-y1) , 2) ; 
    ll distance2 = pow((x3-x1), 2 ) + pow ((y3-y1) , 2) ; 
    ll distance3 = pow((x4-x1), 2 ) + pow ((y4-y1) , 2) ; 

    ll min_distance = distance1;
    ll nearest_x = x2, nearest_y = y2;

    if (distance2 < min_distance)
    {
        min_distance = distance2;
        nearest_x = x3;
        nearest_y = y3;
    }

    if (distance3 < min_distance)
    {
        min_distance = distance3;
        nearest_x = x4;
        nearest_y = y4;
    }

    cout << min_distance << endl;
    cout << nearest_x << " " << nearest_y << endl;
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
