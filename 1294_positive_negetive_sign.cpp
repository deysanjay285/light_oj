#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)

int main()
{
    ll t,cases=1,m,n,sum1,sum2,sum;
     scanf("%lld",&t);
     while(t--)
     {
         scanf("%lld %lld",&n,&m);
         printf("Case %lld: %lld\n",cases++,(m*n)/2);

     }
    return 0;
}
