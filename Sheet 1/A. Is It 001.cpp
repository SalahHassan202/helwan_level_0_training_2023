// A. Is It 001

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll num1 , num2 ; 
    char oper ;
    cin >> num1 >> oper >> num2 ;

    if(oper == '>')
    {
        if(num1 > num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if(oper == '<')
    {
        if(num1 < num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else             // (oper == '=')
    {
        if(num1 == num2)
        {
            cout << "Right" << endl;
        }
        else 
        {
            cout << "Wrong" << endl;
        }
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
