#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<string>
#include<set>
#include<bitset>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define pf pop_front
#define mx 100000

//http://mathcentral.uregina.ca/QQ/database/QQ.09.06/s/dj1.html

int main()
{
    ll t,cases=1,n;
    double R,r,temp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lld",&R,&n);
        temp=2-2*cos(2*pi/n);
        temp=sqrt(temp);
        temp=1/temp;
        temp=temp+0.5;
        temp=1/temp;
        temp=R/2*temp;
        r=temp;
        printf("Case %lld: %0.6lf\n",cases++,r);
    }
    return 0;
}
