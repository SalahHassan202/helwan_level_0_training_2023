// P. master of money

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   
    int x , y , n ;                    cin >> x >> y >> n ;
    // الفكره حسب سعر الحلوي الي اقدر اشتريها لما اشتري 3 حلوات مع بعض و
    //  احسب عدد  سعر الحلوي الي اقدر اشتريها لما اشتري كل حلوه لوحدها 
    // اخيراااا        ===. اجيب اقل تكلفه بينهم

    int three_candy = n / 3 ; 
    int remain_candy = n % 3 ; 

    int cost1 = three_candy * y + remain_candy * x ;     

    int cost2 = x * n ;       

    cout << min(cost1 , cost2) << endl;
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
