#include<bits/stdc++.h>
using namespace std;

#define ll long long

long long H( int n )
{
    long long res = 0;
    for( int i = 1; i <= n; i++ )
        res = res + n / i;
    return res;
}

int main()
{
    int a;
for(ll i=1;i<=100;i++)
    cout<<H(i)<<endl;
    return 0;
}
