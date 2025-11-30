// J. 1st Digit of the Factorial

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    /*
        Factorial ===>  n  ×  (n – 1)  ×  (n – 2)  ×  (n – 3)  ×  ...  ×  2  ×  1
        1! = 1

        2! = 2

        3! = 6

        4! = 24

        5! = 120

        6! = 720

        اي مضروب اكبر من 5 او بيساوي 5 بيكون اول خانه فيه صفر
     */
    ll n;
    cin >> n;
    ll fact = 1;
    if (n >= 5)
        cout << 0;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << (fact % 10);
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