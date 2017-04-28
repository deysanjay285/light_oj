#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll egcd(ll a,ll b,ll *x,ll *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    ll x1,y1,temp;
    temp=b%a;
    ll d=egcd(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    if(d<0)
        d=d*-1;
    return d;
}

int main()
{
    ll a,b,c,x1,x2,y1,y2,t,x,y,gcd,k_x,k_y,no_of_sol_x,no_of_sol_y,top_x,bottom_x,top_y,bottom_y,start_y,no_of_sol,cases=1;
    double temp1,temp2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&x1,&x2,&y1,&y2);
        gcd=egcd(a,b,&x,&y);
        x=x*-c/gcd;
        y=y*-c/gcd;
        k_x=b/gcd;
        k_y=a/gcd;
        top_x=(x2-x)/k_x;
        bottom_x=(x1-x)/k_x;
        top_y=(y2-y)/k_y;
        bottom_y=(y1-y)/k_y;

        if(bottom_x>top_y||bottom_y>top_x)
            no_of_sol=0;
        else if()



    }
    return 0;
}
