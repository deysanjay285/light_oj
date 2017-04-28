#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<string.h>
#include<time.h>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)


int main()
{
    ll t,cases=1;
    double r,oa,x,ox,oy,ax,ay,bx,by,temp1,temp2,arc,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        temp1=(ax-ox)*(ax-ox)+(ay-oy)*(ay-oy);
        r=sqrt(temp1);
        temp2=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
        x=sqrt(temp2);
        temp1=(double)(2*r*r-x*x)/(2*r*r);
        c=acos(temp1);
        printf("Case %lld: %0.3lf\n",cases++,r*c);



    }
    return 0;
}
