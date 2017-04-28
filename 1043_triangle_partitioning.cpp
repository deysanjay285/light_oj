#include<stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<iterator>
#include<string.h>

using namespace std;

#define ll long long int
#define ull unsingned long long int
#define pi 2*acos(0.0)
int main()
{
    ll t,cases=1;
    double ab,bc,ca,ad,rat,s,temp,abc,ade;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&ab,&bc,&ca,&rat);
        s=(ab+bc+ca)/2;
        temp=s*(s-ab)*(s-bc)*(s-ca);
        abc=sqrt(temp);
        ade=(double)abc*rat/(rat+1);
        ade=sqrt(ade);
        abc=sqrt(abc);
        ad=ade/abc*ab;
        printf("Case %lld: %0.6lf\n",cases++,ad);
    }

    return 0;
}
