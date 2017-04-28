#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    long long int t,cases=1;
    double result,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf",&r);
        result=4*r*r-pi*r*r;
        printf("Case %lld: %0.2lf\n",cases++,result);
    }
    return 0;
}
