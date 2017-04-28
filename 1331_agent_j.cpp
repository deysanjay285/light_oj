#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<iterator>
#include<iostream>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back

int main()
{
    ll t,cases=1;
    double a,b,c,R1,R2,R3,theta1,theta2,theta3,ph1,ph2,ph3,l1,l2,l3,x,y,z,s1,s2,s3,p,q,r,ark1,ark2,ark3,sum,area,area1,area2,area3,d_r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&R1,&R2,&R3);
        a=R1+R2;
        b=R1+R3;
        c=R2+R3;
        theta1=acos((b*b+c*c-a*a)/(2*b*c));
        theta2=acos((c*c+a*a-b*b)/(2*a*c));
        theta3=acos((a*a+b*b-c*c)/(2*a*b));
        ph1=(pi-theta3)/2;
        ph2=(pi-theta2)/2;
        ph3=(pi-theta1)/2;
        l1=(R1*sin(theta3))/sin(ph1);
        l2=(R2*sin(theta2))/sin(ph2);
        l3=(R3*sin(theta1))/sin(ph3);
        x=(2*R1+l1)/2;
        y=(2*R2+l2)/2;
        z=(2*R3+l3)/2;
        area1=sqrt(x*(x-R1)*(x-R1)*(x-l1));
        area2=sqrt(y*(y-R2)*(y-R2)*(y-l2));
        area3=sqrt(z*(z-R3)*(z-R3)*(z-l3));
        s1=R1*theta3;
        s2=R2*theta2;
        s3=R3*theta1;
        p=(R1*s1)/(2);
        q=(R2*s2)/(2);
        r=(R3*s3)/(2);
        ark1=p-area1;
        ark2=q-area2;
        ark3=r-area3;
        sum=(l1+l2+l3)/2;
        area=sqrt(sum*(sum-l1)*(sum-l2)*(sum-l3));
        d_r=area-(ark1+ark2+ark3);
        printf("Case %lld: %.6lf\n",cases++,d_r);


    }
    return 0;
}
