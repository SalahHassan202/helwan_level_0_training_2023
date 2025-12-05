// O. Sultan's Line
// # include<iostream>
// #include <cmath>              
// using namespace std ;
// int main()
// {
// this solution give wrong answer on test 55 ===> ربما يكون القسمه في المقام = صفر 
// عشان اعمل هاندل للنقطه بتاع الصفر دي هلجأ لفكره ان ال 3 نقاط تقع علي خط مستقيم اذا كان المحدد = صفر
//     double x1, y1, x2, y2, x3 , y3 ;
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;

//     double slope1 =  (y2 - y1) / (x2 - x1) ;     // slope between (x1 , x2) && (y1 , y3)
//     double slope2 =  (y3 - y1) / (x3 - x1) ;     // slope between (x1 , x3) && (y1 , y3)
    
//     if (slope1 == slope2 )
//     {
//         cout << "Yes" << endl;
//     } else
//     {
//         cout << "No" << endl;
//     }
    

//     return 0 ; 
// }

//************************************************************************** */

// O. Sultan's Line

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    double x1, y1, x2, y2, x3 , y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    // عشان تكون ال3 نقاط علي استقامه واحده لازم المحدد = صفر
    double area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) ;

    if(area == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
