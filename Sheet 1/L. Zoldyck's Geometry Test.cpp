// L. Zoldyck's Geometry Test

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    double r, a;
    cin >> r >> a;

    /*

    إذا كان r أكبر من أو يساوي نصف قطر الدائرة التي تحيط بالمربع، نطبع "Circle"
    إذا كان r أقل من أو يساوي نصف طول ضلع المربع، نطبع "Square"
    إذا لم يتحقق أي من الشرطين، نطبع "Complex"
    
    */

    double squareInCircle = (a * sqrt(2)) / 2 ;         // sqrt     ===>     <cmath>
    
    double circleInSquare = a / 2 ;
    
    if (r >= squareInCircle)          // المربع جوا الدايره
    {
        cout << "Circle" << endl ;

    }
    else if (r <= circleInSquare)      // الدايره جوا المربع 
    {
        cout << "Square" << endl ;
    }
    else
    {
        cout << "Complex" << endl;
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
