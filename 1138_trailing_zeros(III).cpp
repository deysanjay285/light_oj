#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 100001000

ll arr[mx];

ll trailing_zero(ll n)
{
    ll sum=0;
    while(n)
    {
        n=n/5;
        sum=sum+n;
    }
    return sum;
}

int main()
{
    ll t,q,cases=1,res;
    for(ll i=1;i<=100;i++)
        cout<<i<<" "<<trailing_zero(i)<<endl;

    return 0;
}
